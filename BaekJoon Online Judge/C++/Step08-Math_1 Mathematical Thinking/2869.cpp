//
//  2869.cpp
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
    
    int a, b, v, day;
    
    cin >> a >> b >> v;
    
    day = (a == v ? 1 : (v - a - 1) / (a - b) + 2);
    
    cout << day;
    
    return 0;
}