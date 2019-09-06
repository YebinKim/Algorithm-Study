//
//  1904.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i;
    
    cin >> n;
    
    unsigned int tile[n];
    tile[0] = 1;
    tile[1] = 2;
    
    for(i = 2; i < n; i++) {
        tile[i] = (tile[i - 1] + tile[i - 2]) % 15746;
    }
    
    cout << tile[n - 1];
    
    return 0;
}
