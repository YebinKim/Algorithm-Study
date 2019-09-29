//
//  6064.cpp
//  Step8-Math_1 Mathematical Thinking
//
//  Created by 김예빈 on 2019. 9. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

// MARK - resolve later

#include <iostream>
using namespace std;

int gcd(int, int);
int lcm(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int repeat, m, n, x, y, max, temp, i;
    
    cin >> repeat;
    
    while(repeat--) {
        cin >> m >> n >> x >> y;
        
        max = lcm(m, n);
        
        for (i = x; i <= max; i += m) {
            temp = (i % n == 0) ? n : i % n;
            if (temp == y) {
                cout << i << "\n";
                break;
            }
        }
        if (i > max)
            cout << "-1" << endl;
    }
    return 0;
}

int gcd(int m, int n)
{
    int tmp;
    while (n)
    {
        tmp = m;
        m = n;
        n = tmp%n;
    }
    
    return m;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
