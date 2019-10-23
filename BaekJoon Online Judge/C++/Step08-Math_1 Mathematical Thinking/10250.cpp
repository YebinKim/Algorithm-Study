//
//  10250.cpp
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
    
    int tc, h, w, n, floor, remain;
    int answer;
    
    cin >> tc;
    
    while(tc--) {
        cin >> h >> w >> n;
        
        n--;
        floor = (n % h + 1) * 100;
        remain = n / h + 1;
        
        answer = floor + remain;
        
        cout << answer << "\n";
    }
    
    return 0;
}
