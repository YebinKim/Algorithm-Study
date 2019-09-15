//
//  2609.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 9. 15..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a, b, greatest, least;
    
    cin >> a >> b;
    
    greatest = a > b ? gcd(a, b) : gcd(b, a);
    least = a * b / greatest;
    
    cout << greatest << "\n" << least;
    
    return 0;
}

int gcd(int a, int b) {
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
