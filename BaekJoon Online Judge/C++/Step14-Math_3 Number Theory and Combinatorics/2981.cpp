//
//  2981.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 10. 1..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int num[101], result[500];

int gcd(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, max, cnt = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> num[i];
    
    sort(num, num + n);
    max = num[1] - num[0];
    
    for(int i = 2; i < n; i++)
        max = gcd(max, num[i] - num[i - 1]);
    
    for(int i = 1; i*i <= max; i++)
        if(max % i == 0) {
            result[cnt++] = i;
            
            if(i != max / i)
                result[cnt++] = max / i;
        }
    
    sort(result, result + cnt);
    
    for(int i = 0; i < cnt; i++) {
        if(result[i] != 1) {
            cout << result[i];
            
            if(i < cnt - 1)
                cout << " ";
        }
    }
    
    return 0;
}

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
