//
//  6064.cpp
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/10/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

int gcd(int, int);
int lcm(int, int);

// Time Complexity O(M*N)
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int TC, m, n, x, y, i, max, temp;
    
    cin >> TC;
    
    while(TC--) {
        cin >> m >> n >> x >> y;
        
        max = lcm(m, n);
        
        for(i = x; i <= max; i += m) {
            temp = (i % n == 0) ? n : i % n;
            
            if(temp == y) {
                cout << i << "\n";
                break;
            }
        }
        
        if (i > max)
            cout << "-1" << endl;
    }
    
    return 0;
}

int gcd(int m, int n) {
    int tmp;
    
    while(n) {
        tmp = m;
        m = n;
        n = tmp % n;
    }
    
    return m;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
