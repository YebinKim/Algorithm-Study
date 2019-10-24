//
//  4948.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

bool searchPrime(int);

// Time Complexity O(n*log(n))
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n1, n2, cnt;
    
    while(1) {
        cin >> n1;
        
        if(n1 == 0) break;
        
        cnt = 0;
        n2 = n1 * 2;
        n1++;
        
        for(int i = n1; i <= n2; i++)
            if(searchPrime(i))
                cnt++;
        
        cout << cnt << "\n";
    }
    
    return 0;
}

bool searchPrime(int input) {
    if(input < 2) return false;
    
    for(int i = 2; i * i <= input; i++)
        if(input % i == 0)
            return false;
    
    return true;
}
