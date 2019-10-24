//
//  1929.cpp
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/10/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

// Using eratosthenes sieve
// Time Complexity O((size)^2)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m, n, size, limit = 1;
    
    cin >> m >> n;
    
    size = n - m + 1;
    
    int num[size];
    
    for(int i = 0; i < size; i++)
        num[i] = m + i;
    
    if(num[0] == 1)
        num[0] = -1;
    
    while(limit++) {
        if(pow(limit, 2) > n)
            break;
        
        for(int i = 0; i < size; i++)
            if(num[i] != -1 && num[i] % limit == 0)
                for(int j = i; j < size; j += limit) {
                    if (num[j] == limit) continue;
                    else
                        num[j] = -1;
                }
    }
    
    for(int i = 0; i < size; i++)
        if(num[i] != -1)
            cout << num[i] << "\n";

    return 0;
}
