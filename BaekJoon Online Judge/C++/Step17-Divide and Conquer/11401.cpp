//
//  11401.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 9. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long fac(long long);
long long pow(long long, int);

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long n, k, result;
    
    cin >> n >> k;
    
    long long a = fac(n);
    long long b = fac(n - k) * fac(k) % MOD;
    
    result = a * pow(b, MOD - 2) % MOD;
    
    cout << result;
    
    return 0;
}

long long fac(long long n) {
    long long ret = 1;
    
    while(n > 1)
        ret = (ret * n--) % MOD;
    
    return ret;
}

long long pow(long long a, int b) {
    long long ret = 1;
    
    while(b > 0) {
        if(b % 2 == 1) ret = ret * a  % MOD;
        
        b = b / 2;
        a = (a * a) % MOD;
    }
    
    return ret;
}
