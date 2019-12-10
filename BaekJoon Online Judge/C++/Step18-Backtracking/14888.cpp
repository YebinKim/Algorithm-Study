//
//  14888.cpp
//  Step18-Backtracking
//
//  Created by Yebin Kim on 2019/12/10.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <limits.h>
#include <algorithm>

using namespace std;

int N;
int maxValue = INT_MIN;
int minValue = INT_MAX;
int num[12], op[4];

void dfs(int, int, int, int, int ,int);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
        cin >> num[i];
    
    for(int i = 0; i < 4; i++)
        cin >> op[i];
    
    dfs(op[0], op[1], op[2], op[3], 1, num[0]);
    
    cout << maxValue << "\n";
    cout << minValue << "\n";
    
    return 0;
}

void dfs(int plus, int minus, int multiply, int divide, int cnt, int sum) {
    if(cnt == N) {
        maxValue = max(maxValue, sum);
        minValue = min(minValue, sum);
    }
    
    if(plus > 0) dfs(plus - 1, minus, multiply, divide, cnt + 1, sum + num[cnt]);
    
    if(minus > 0) dfs(plus, minus - 1, multiply, divide, cnt + 1, sum - num[cnt]);
    
    if(multiply > 0) dfs(plus, minus, multiply - 1, divide, cnt + 1, sum * num[cnt]);
    
    if(divide > 0) dfs(plus, minus, multiply, divide - 1, cnt + 1, sum / num[cnt]);
}
