//
//  9020.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

bool searchPrime(int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int repeat, n, prime_1, prime_2, i, j;
    vector<int> prime;
    
    cin >> repeat;
    
    while(repeat--) {
        cin >> n;
        
        prime.clear();
        prime_1 = 0;
        prime_2 = 10000;
        
        for(i = n; i > 1; i--)
            if(searchPrime(i)) {
                prime.push_back(i);
            }
        
        for(i = 0; i < prime.size(); i++) {
            for(j = prime.size() - 1; j >= i; j--) {
                if(n - prime.at(i) - prime.at(j) == 0) {
                    if(prime.at(i) - prime.at(j) < prime_2 - prime_1) {
                        prime_1 = prime.at(j);
                        prime_2 = prime.at(i);
                    }
                    break;
                }
            }
        }
        
        cout << prime_1 << " " << prime_2 << "\n";
    }

    return 0;
}

bool searchPrime(int input)
{
    int i;
    
    if(input < 2)
        return false;
    
    for(i = 2; i * i <= input; i++)
    {
        if((input % i) == 0)
            return false;
    }
    
    return true;
}
