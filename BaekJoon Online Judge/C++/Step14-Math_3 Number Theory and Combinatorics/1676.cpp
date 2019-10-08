//
//  1676.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 10. 2..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, two = 0, five = 0, result;
    
    cin >> n;
    
    for(int i = 2; i <= n; i *= 2) two += n / i;
    for(int i = 5; i <= n; i *= 5) five += n / i;
    
    result = two < five ? two : five;
    cout << result;
    
    return 0;
}
