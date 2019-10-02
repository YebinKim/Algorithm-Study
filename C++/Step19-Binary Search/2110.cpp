//
//  2110.cpp
//  Step19-Binary Search
//
//  Created by 김예빈 on 2019. 10. 2..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, result = 0, mid, left, right, pre, cnt, temp;
    vector<int> house;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        house.push_back(temp);
    }
    
    sort(house.begin(), house.end());
    
    left = 1;
    right = house.back() - house.front();
    
    while(left <= right) {
        pre = 0;
        cnt = 1;
        mid = (left + right) / 2;
        
        for(int i = 1; i < n; i++) {
            if(house[i] - house[pre] >= mid) {
                pre = i;
                cnt++;
            }
        }
        
        if(cnt >= m)
            left = mid + 1;
        else
            right = mid - 1;
        
        if (result < mid && cnt >= m)
            result = mid;
    }
    
    cout << result;
    
    return 0;
}
