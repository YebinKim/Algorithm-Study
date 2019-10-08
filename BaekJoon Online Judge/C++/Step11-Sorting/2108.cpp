//
//  2108.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 8..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    const int MAX = 4000;
    int n, idx = 0, i;
    int mode[MAX * 2 + 1] = { 0, };
    double arithmeticalAvg = 0, medianValue, modeValue = 0, range;
    bool multi = false;
    
    cin >> n;
    
    vector<int> num(n);
    
    for(i = 0; i < n; i++) {
        cin >> num[i];
        
        arithmeticalAvg += num[i];
        mode[num[i] + MAX]++;
    }
    
    sort(num.begin(), num.end());
    
    arithmeticalAvg = arithmeticalAvg / double(n);
    arithmeticalAvg = round(arithmeticalAvg);
    
    for(i = 0; i <= MAX * 2; i++) {
        if (idx < mode[i]) {
            idx = mode[i];
            modeValue = i - 4000;
            multi = false;
        } else if(idx == mode[i] && !multi) {
            modeValue = i - 4000;
            multi = true;
        }
    }

    medianValue = num[n / 2];
    range = num[num.size() - 1] - num[0];

    cout << arithmeticalAvg << "\n" << medianValue << "\n" << modeValue << "\n" << range;
    
    return 0;
}
