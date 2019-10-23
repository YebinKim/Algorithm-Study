//
//  1712.cpp
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/10/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

// Time Complexity O(1)
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a, b, c;
    int answer;
    
    cin >> a >> b >> c;
    
    if(c - b > 0)
        answer = a / (c - b) + 1;
    else
        answer = -1;
        
    cout << answer;
    
    return 0;
}
