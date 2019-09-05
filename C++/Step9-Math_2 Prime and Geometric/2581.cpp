//
//  2581.cpp
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
    
    int start, end, sum = 0, min = 10000, i;
    
    cin >> start >> end;
    
    for(i = start; i <= end; i++)
    {
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
