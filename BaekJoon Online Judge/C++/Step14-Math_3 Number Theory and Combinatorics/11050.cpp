//
//  11050.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 9. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int binoCoefficient(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k, result;
    
    cin >> n >> k;
    
    result = binoCoefficient(n, k);
    cout << result;
    
    return 0;
}

int binoCoefficient(int n, int k) {
    if(k == 0 || n == k) return 1;
    else return binoCoefficient(n - 1, k) + binoCoefficient(n - 1, k - 1);
}
