//
//  7568.cpp
//  Step10-Brute Force
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, i, j;
    
    cin >> n;
    
    int person[n][2];
    int order[n];
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < 2; j++)
            cin >> person[i][j];
        
        order[i] = 1;
    }
    
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            if(i == j)
                continue;
            else if(person[i][0] < person[j][0] && person[i][1] < person[j][1])
                order[i]++;
        }
    
    for (i = 0; i < n; i++)
        cout << order[i] << " ";
    
    return 0;
}
