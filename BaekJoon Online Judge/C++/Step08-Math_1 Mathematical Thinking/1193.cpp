//
//  1193.cpp
//  Step8-Math_1 Mathematical Thinking
//
//  Created by 김예빈 on 2019. 9. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, a = 1, up, down;
    
    cin >> n;
    
    while (n > 0)
        n -= a++;
    
    up = n + --a;
    down = ++a - up;
    
    if (a % 2 != 0)
        cout << up << "/" << down;
    else
        cout << down << "/" << up;
    
    return 0;
}
