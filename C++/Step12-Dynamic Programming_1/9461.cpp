//
//  9461.cpp
//  Step12-Dynamic Programming_1
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int t, n, i;
    long long triangle[100];
    
    triangle[0] = triangle[1] = triangle[2] = 1;
    triangle[3] = triangle[4] = 2;
    triangle[5] = 3;
    
    cin >> t;
    
    while(t--) {
        cin >> n;
        
        for(i = 5; i < n; i++)
            triangle[i] = triangle[i - 1] + triangle[i - 5];
        
        cout << triangle[n - 1] << "\n";
    }
    
    return 0;
}
