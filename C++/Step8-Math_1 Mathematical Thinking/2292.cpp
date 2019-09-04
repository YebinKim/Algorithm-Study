//
//  2292.cpp
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
    
    int n, result = 1;
    
    cin >> n;
    
    n -= 1;
    
    while (n > 0) {
        n -= 6 * result++;
    }
    
    cout << result;
    
    return 0;
}
