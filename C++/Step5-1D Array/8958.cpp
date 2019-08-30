//
//  8958.cpp
//  Step5-1D Array
//
//  Created by 김예빈 on 2019. 8. 30..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, score, sum, i, j;
    char arr[80];
    
    cin >> n;
    
    for (i = 0; i < n; i++)
    {
        cin >> arr;
        
        score = 1;
        sum = 0;
        
        for (j = 0; j < strlen(arr); j++)
        {
            if (arr[j] == 'O')
                sum += score++;
            else
                score = 1;
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}
