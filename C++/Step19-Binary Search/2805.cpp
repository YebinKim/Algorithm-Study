//
//  2805.cpp
//  Step19-Binary Search
//
//  Created by 김예빈 on 2019. 9. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, m;
    long long result = 0, mid, left = 0, right = 0, sum;
    
    cin >> n >> m;
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if(right < arr[i])
            right = arr[i];
    }
    
    while(left <= right) {
        mid = (left + right) / 2;
        sum = 0;
        
        for(int i = 0; i < n; i++)
            if(mid < arr[i])
                sum += arr[i] - mid;
        
        if(sum >= m){
            if(result < mid)
                result = mid;
            
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << result;
    
    return 0;
}
