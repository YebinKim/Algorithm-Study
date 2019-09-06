 //
//  1003.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int fib[2][41] = { 0, };

void fibonacci(int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int t, n;
    
    cin >> t;
    
    while(t--) {
        cin >> n;
        
        fibonacci(n);
        
        cout << fib[0][n] << " " << fib[1][n] << "\n";
    }
    
    return 0;
}

void fibonacci(int n) {
    int i;
    fib[0][0] = 1;
    fib[1][1] = 1;
    
    for(i = 2; i <= n; i++) {
        fib[0][i] = fib[0][i - 1] + fib[0][i - 2];
        fib[1][i] = fib[1][i - 1] + fib[1][i - 2];
    }
}
