//
//  1978.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

bool searchPrime(int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, cnt = 0, i;
    
    cin >> n;
    
    int num[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> num[i];
        if(searchPrime(num[i]))
            cnt++;
    }
    
    cout << cnt << "\n";
    
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
