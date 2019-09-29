//
//  2775.cpp
//  Step8-Math_1 Mathematical Thinking
//
//  Created by 김예빈 on 2019. 9. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int repeat, k, n, i, j;
    int room[15][15] = { 1 };
    
    for(i = 1; i < 15; i++) {
        room[0][i] = i + 1;
        room[i][0] = 1;
    }
    
    for (i = 1; i < 15; i++)
        for (j = 1; j < 15; j++)
            room[i][j] = room[i][j - 1] + room[i - 1][j];
    
    cin >> repeat;
    
    while(repeat--) {
        cin >> k >> n;
        
        cout << room[k][n - 1] << "\n";
    }
    
    return 0;
}
