//
//  2004.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 10. 2..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

long long zeroCount(int, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m, n;
    long long two = 0, five = 0, result;
    
    cin >> m >> n;
    
    two = zeroCount(m, n, 2);
    five = zeroCount(m, n, 5);
    
    result = two < five ? two : five;
    cout << result;
    
    return 0;
}

long long zeroCount(int m, int n, int mul) {
    long long cnt = 0, i;
    
    for(i = mul; i <= m; i *= mul) cnt += m / i;
    for(i = mul; i <= m - n; i *= mul) cnt -= (m - n) / i;
    for(i = mul; i <= n; i *= mul) cnt -= n / i;
    
    return cnt;
}
