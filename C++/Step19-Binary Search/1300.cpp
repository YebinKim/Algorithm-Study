//
//  1300.cpp
//  Step19-Binary Search
//
//  Created by 김예빈 on 2019. 10. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k, result = 0, mid, left, right, cnt;
    
    cin >> n >> k;
    
    left = 1;
    right = k;
    
    while(left <= right){
        cnt = 0;
        mid = (left + right) / 2;
        
        for(int i = 1; i <= n; i++) {
            cnt += min(mid / i, n);
        }
        
        if(cnt < k)
            left = mid + 1;
        else {
            result = mid;
            right = mid - 1;
        }
    }
    
    cout << result;
    
    return 0;
}
