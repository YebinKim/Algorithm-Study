//
//  2231.cpp
//  Step10-Brute Force
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, sum, result = 0, temp, i;
    
    cin >> n;
    
    for(i = 1; i < n; i++) {
        sum = temp = i;
        
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        if(sum == n) {
            result = i;
            break;
        }
    }
    
    cout << result;
    
    return 0;
}
