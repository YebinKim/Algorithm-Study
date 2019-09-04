//
//  2839.cpp
//  Step8-Math_1 Mathematical Thinking
//
//  Created by 김예빈 on 2019. 9. 3..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, maxFive, maxThree, result = 0;
    
    cin >> n;
    
    maxFive = n / 5;
    
    while(maxFive >= 0) {
        maxThree = n - (maxFive * 5);
        
        if (maxThree % 3 == 0) {
            result = maxThree / 3 + maxFive;
            break;
        }
        else
            maxFive--;
    }
    
    if(result <= 0)
        cout << -1;
    else
        cout << result;
    
    return 0;
}
