//
//  1978.cpp
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/10/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

bool searchPrime(int);

// Time Complexity O(n*log(n))
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, check, cnt = 0;
    
    cin >> n;
    
    while(n--) {
        cin >> check;
        
        if(searchPrime(check))
            cnt++;
    }
    
    cout << cnt << "\n";
    
    return 0;
}

bool searchPrime(int input) {
    if(input < 2) return false;
    
    for(int i = 2; i * i <= input; i++)
        if(input % i == 0)
            return false;
    
    return true;
}
