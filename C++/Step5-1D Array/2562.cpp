//
//  2562.cpp
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
    
    int arr[9], max = 0, index, i;
    
    for (i = 0; i < 9; i++)
    {
        cin >> arr[i];
        
        if (max < arr[i])
        {
            max = arr[i];
            index = i + 1;
        }
    }
    
    cout << max << "\n" << index;
    
    return 0;
}
