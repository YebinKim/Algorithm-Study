//
//  1193.cpp
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
    
    int n, a = 1, up, down;
    
    cin >> n;
    
    while(n > 0) n -= a++;
    
    up = n + --a;
    down = ++a - up;
    
    if (a % 2 != 0)
        cout << up << "/" << down;
    else
        cout << down << "/" << up;
    
    return 0;
}
