//
//  3009.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int rect[3][2];
    int x, y, i, j;
    
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            cin >> rect[i][j];
    
    x = rect[0][0];
    y = rect[0][1];
    x = rect[1][0] == x ? rect[2][0] : (rect[1][0] == rect[2][0] ? x : rect[1][0]);
    y = rect[1][1] == y ? rect[2][1] : (rect[1][1] == rect[2][1] ? y : rect[1][1]);
    
    cout << x << " " << y;

    return 0;
}
