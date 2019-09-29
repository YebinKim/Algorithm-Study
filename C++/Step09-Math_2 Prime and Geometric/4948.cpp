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

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n_1, n_2, cnt, i;
    
    while(1) {
        cin >> n_1;
        
        if(n_1 == 0)
            break;
        
        n_2 = n_1++ * 2;
        cnt = 0;
        
        for(i = n_1; i <= n_2; i++)
            if(searchPrime(i))
                cnt++;
        
        cout << cnt << "\n";
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
