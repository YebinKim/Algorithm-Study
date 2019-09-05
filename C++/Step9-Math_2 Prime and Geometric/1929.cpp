//
//  1929.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m, n, size, i, j, limit = 1;
    
    cin >> m >> n;
    
    size = n - m + 1;
    
    int num[size];
    
    for(i = 0; i < size; i++)
        num[i] = m + i;
    
    if(num[0] == 1)
        num[0] = -1;
    
    // Using eratosthenes sieve
    while(limit++) {
        if(pow(limit, 2) > n)
            break;
        
        for(i = 0; i < size; i++)
            if(num[i] != -1 && num[i] % limit == 0)
                for(j = i; j < size; j += limit) {
                    if (num[j] == limit)
                        continue;
                    else
                        num[j] = -1;
                }
    }
    
    for(i = 0; i < size; i++)
        if(num[i] != -1)
            cout << num[i] << "\n";
    

    return 0;
}
