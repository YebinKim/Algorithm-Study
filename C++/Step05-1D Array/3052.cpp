//
//  3052.cpp
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
    
    bool arr[42] = {0, };
    int n, count = 0, i;
    
    for (i = 0; i < 10; i++)
    {
        cin >> n;
        arr[n % 42] = true;
    }
    
    for (i = 0; i < 42; i++)
        if (arr[i] == true)
            count++;
    
    cout << count;
    
    return 0;
}
