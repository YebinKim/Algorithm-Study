//
//  2869.cpp
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
    
    int a, b, v;
    int answer;
    
    cin >> a >> b >> v;
    
    answer = (a == v ? 1 : (v - a - 1) / (a - b) + 2);
    
    cout << answer;
    
    return 0;
}
