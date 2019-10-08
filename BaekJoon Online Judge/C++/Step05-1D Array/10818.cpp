//
//  10818.cpp
//  Step5-1D Array
//
//  Created by 김예빈 on 2019. 8. 30..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, max = -1000000, min = 1000000, i;
    
    cin >> n;
    
    int arr[n];
    
    for (i = 0; i < n; i++)
    {
        cin >> arr[n];
        
        if (max < arr[n])
            max = arr[n];
        
        if (min > arr[n])
            min = arr[n];
    }
    
    cout << min << " " << max;
    
    return 0;
}
