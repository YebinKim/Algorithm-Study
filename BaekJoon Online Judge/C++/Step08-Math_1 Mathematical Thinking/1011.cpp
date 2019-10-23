//
//  1011.cpp
//  Step08-Math_1 Mathematical Thinking
//
//  Created by Yebin Kim on 2019/10/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

// Time Complexity O(dist*log(dist))
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int answer;
    int tc, x, y;
    double cnt, remain, dist;
    
    cin >> tc;
    
    while(tc--) {
        cin >> x >> y;
        
        cnt = 1;
        dist = y - x;
        
        while(cnt * cnt <= dist) cnt++;
        
        cnt--;
        
        remain = ceil((dist - cnt * cnt) / cnt);
        answer = cnt * 2 - 1 + remain;
        
        cout << answer << "\n";
    }
    
    return 0;
}
