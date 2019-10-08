//
//  11047.cpp
//  Step13-Greedy Algorithm
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, k, change = 0, max, i;
    
    cin >> n >> k;
    
    int money[n];
    
    for(i = 0; i < n; i++)
        cin >> money[i];
    
    max = n - 1;
    
    while(max >= 0) {
        if(k >= money[max]) {
            k -= money[max];
            change++;
        } else {
            max--;
        }
    }
    
    cout << change;
    
    return 0;
}
