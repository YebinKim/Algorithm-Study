//
//  2839.cpp
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/10/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Complexity O(n*log(n))
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, five, three = 0;
    int answer;
    
    cin >> n;
    
    five = n / 5;
    
    while(five >= 0) {
        three = n - (five * 5);
        
        if(three % 3 == 0) {
            three /= 3;
            break;
        } else
            five--;
    }
    
    if(five < 0)
        answer = -1;
    else
        answer = five + three;
    
    cout << answer;
    
    return 0;
}
