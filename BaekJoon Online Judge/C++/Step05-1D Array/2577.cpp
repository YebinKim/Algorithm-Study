//
//  2577.cpp
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
    
    int arr[10] = {0, }, a, b, c, result, i;
    
    cin >> a >> b >> c;
    
    result = a * b * c;
    
    while (result > 0)
    {
        arr[(result % 10)]++;
        result /= 10;
    }
    
    for (i = 0; i < 10; i++)
        cout << arr[i] << "\n";
    
    return 0;
}
