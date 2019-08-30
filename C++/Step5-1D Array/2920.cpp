//
//  2920.cpp
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
    
    int arr[8], chk = 0, i;
    
    cin >> arr[0];
    
    for (i = 1; i < 8; i++)
    {
        cin >> arr[i];
        
        if (arr[i - 1] < arr[i])
        {
            chk++;
        } else {
            chk--;
        }
    }
    
    if (chk == 7)
        cout << "ascending";
    else if (chk == -7)
        cout << "descending";
    else
        cout << "mixed";
    
    return 0;
}
