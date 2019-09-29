//
//  1712.cpp
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
    
    int a, b, c, result;
    
    cin >> a >> b >> c;
    
    if(c - b > 0)
        result = a / (c - b) + 1;
    else
        result = -1;
    
    cout << result;
    
    return 0;
}
