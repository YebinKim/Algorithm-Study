//
//  2618.cpp
//  Step23-Dynamic Programming_2
//
//  Created by 김예빈 on 2019. 10. 13..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

const int MAX = 1000;

int n, w;
pair<int, int> one[MAX + 1], two[MAX + 1];
int dp[MAX + 1][MAX + 1];

int dist(pair<int, int>, pair<int, int>);
int total(int, int);
void caseClose(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> n >> w;
    
    one[0] = { 1, 1 };
    two[0] = { n, n };
    memset(dp, -1, sizeof(dp));
    
    for(int i = 1; i <= w; i++) {
        cin >> one[i].first >> one[i].second;
        two[i] = { one[i].first, one[i].second };
    }
    
    cout << total(0, 0) << "\n";
    caseClose(0, 0);
    
    return 0;
}

int dist(pair<int, int> one, pair<int, int> two) {
    int distance = abs(two.first - one.first) + abs(two.second - one.second);
    return distance;
}

int total(int c1, int c2) {
    if(c1 == w || c2 == w) return 0;
    
    int& ref = dp[c1][c2];
    if(ref != -1) return ref;
    
    int np = max(c1, c2) + 1;
    
    int n1 = dist(one[c1], one[np]);
    int n2 = total(np, c2) + n1;
    
    int m1 = dist(two[c2], two[np]);
    int m2 = total(c1, np) + m1;
    
    return ref = min(n2, m2);
}

void caseClose(int x, int y) {
    if(x == w || y == w) return;
    
    int np = max(x, y) + 1;
    
    int n1 = dist(one[x], one[np]);
    int n2 = dp[np][y] + n1;
    
    int m1 = dist(two[y], two[np]);
    int m2 = dp[x][np] + m1;
    
    if(n2 > m2) {
        cout << "2" << "\n";
        caseClose(x, np);
    } else {
        cout << "1" << "\n";
        caseClose(np, y);
    }
}
