//
//  2292.cpp
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
    
    int n;
    int answer = 1;
    
    cin >> n;
    
    n -= 1;
    
    while (n > 0) n -= 6 * answer++;
    
    cout << answer;
    
    return 0;
}
