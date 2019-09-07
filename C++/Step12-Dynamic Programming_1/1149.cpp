//
//  1149.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 7..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, minus, result, i, j;
    
    cin >> n;
    
    minus = n - 1;
    
    int house[n][3];
    int cost[n][3];
    
    for(i = 0; i < n; i++)
        for(j = 0; j < 3; j++)
            cin >> house[i][j];
    
    cost[0][0] = house[0][0];
    cost[0][1] = house[0][1];
    cost[0][2] = house[0][2];
    
    for(i = 1; i < n; i++) {
        cost[i][0] = ((cost[i - 1][1] < cost[i - 1][2]) ? cost[i - 1][1] : cost[i - 1][2]) + house[i][0];
        cost[i][1] = ((cost[i - 1][0] < cost[i - 1][2]) ? cost[i - 1][0] : cost[i - 1][2]) + house[i][1];
        cost[i][2] = ((cost[i - 1][0] < cost[i - 1][1]) ? cost[i - 1][0] : cost[i - 1][1]) + house[i][2];
    }
    
    result = (cost[minus][0] < cost[minus][1]) ? (cost[minus][0] < cost[minus][2] ? cost[minus][0] : cost[minus][2]) : (cost[minus][1] < cost[minus][2] ? cost[minus][1] : cost[minus][2]);
    
    cout << result;
    
    return 0;
}
