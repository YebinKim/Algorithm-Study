//
//  9020.cpp
//  Step09-Math_2 Prime and Geometric
//
//  Created by Yebin Kim on 2019/10/24.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

bool searchPrime(int);

// Time Complexity O(n^2)
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, n, prime_1, prime_2;
    vector<int> prime;
    
    cin >> tc;
    
    while(tc--) {
        cin >> n;
        
        prime.clear();
        prime_1 = 0;
        prime_2 = 10000;
        
        for(int i = n; i > 1; i--)
            if(searchPrime(i))
                prime.push_back(i);
        
        for(int i = 0; i < prime.size(); i++)
            for(int j = prime.size() - 1; j >= i; j--)
                if(n - prime[i] - prime[j] == 0) {
                    if(prime[i] - prime[j] < prime_2 - prime_1) {
                        prime_1 = prime[j];
                        prime_2 = prime[i];
                    }
                    
                    break;
                }
        
        cout << prime_1 << " " << prime_2 << "\n";
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
