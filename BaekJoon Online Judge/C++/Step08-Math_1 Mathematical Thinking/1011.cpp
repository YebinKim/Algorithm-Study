//
//  1011.cpp
//  Step8-Math_1 Mathematical Thinking
//
//  Created by 김예빈 on 2019. 9. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, start, end, result, i;
    double cnt, remain, dist;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> start >> end;
        
        dist = end - start;
        cnt = 1;
        
        while (cnt * cnt <= dist)
            cnt++;
        cnt--;
        
        remain = ceil((dist - pow(cnt, 2)) / cnt);
        result = cnt * 2 - 1 + remain;
        
        cout << result << "\n";
    }

    return 0;
}
