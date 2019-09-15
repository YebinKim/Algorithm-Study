//
//  11653.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 9. 15..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, divisor = 2;
    vector<int> primeFactor;
    
    cin >> n;
    
    while(n != 1) {
        if(n % divisor == 0) {
            n /= divisor;
            primeFactor.push_back(divisor);
            divisor = 2;
            
            if(divisor * divisor > n)
                break;
        } else {
            divisor++;
        }
    }
    
    if(n > 1)
        primeFactor.push_back(n);
    
    for(int i = 0; i < primeFactor.size(); i++)
        cout << primeFactor[i] << "\n";
    
    return 0;
}
