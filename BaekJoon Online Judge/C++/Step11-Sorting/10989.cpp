//
//  10989.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 7..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

// Using Counting Sort Algorithm
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    const int MAX = 10001;
    int input[MAX] = { 0, };
    int n, temp, i, j;
    
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> temp;
        input[temp]++;
    }
    
    for(i = 0; i < MAX; i++)
        if(input[i] > 0)
            for(j = 0; j < input[i]; j++)
                cout << i << "\n";

    return 0;
}
