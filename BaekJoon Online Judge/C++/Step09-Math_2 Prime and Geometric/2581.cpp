//
//  2581.cpp
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/10/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

bool searchPrime(int);

// Time Complexity O((n-m)*log(n))
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m, n, sum = 0, min = 10000;
    
    cin >> m >> n;
    
    for(int i = m; i <= n; i++) {
        if(searchPrime(i)) {
            sum += i;
            
            if(i < min)
                min = i;
        }
    }
    
    if(sum != 0)
        cout << sum << "\n" << min;
    else
        cout << "-1";
    
    return 0;
}

bool searchPrime(int input) {
    if(input < 2) return false;
    
    for(int i = 2; i * i <= input; i++)
        if(input % i == 0)
            return false;
    
    return true;
}
