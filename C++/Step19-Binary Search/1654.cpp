//
//  1654.cpp
//  Step19-Binary Search
//
//  Created by 김예빈 on 2019. 9. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int k, n, result;
    long long max = 0, mid, left = 0, right = pow(2, 31) - 1;
    
    cin >> k >> n;
    
    int arr[k];
    
    for(int i = 0; i < k; i++)
        cin >> arr[i];
    
    while(left <= right) {
        result = 0;
        mid = (left + right) / 2;
        
        for(int j = 0; j < k; j++)
            result = result + arr[j] / mid;
        
        if(result >= n) {
            left = mid + 1;
            
            if(mid > max)
                max = mid;
        } else if(result < n)
            right = mid-1;
    }
    
    cout << max;
    
    return 0;
}
