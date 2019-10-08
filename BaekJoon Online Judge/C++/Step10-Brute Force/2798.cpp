//
//  2798.cpp
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
    
    int n, max, sum, result = 0, i, j, k;
    
    cin >> n >> max;
    
    int card[n];
    
    for(i = 0; i < n; i++)
        cin >> card[i];
    
    for(i = n - 1; i >= 0; i--) {
        for(j = i - 1; j >= 0; j--) {
            for(k = j - 1; k >= 0; k--) {
                sum = card[i] + card[j] + card[k];
                
                if(sum <= max)
                    if(result < sum)
                        result = sum;
            }
        }
    }
    
    cout << result;
    
    return 0;
}
