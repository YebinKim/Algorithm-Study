//
//  1037.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 9. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, result;
    
    cin >> n;
    
    vector<int> num(n);
    
    for(int i = 0; i < n; i++)
        cin >> num[i];
    
    sort(num.begin(), num.end());
    result = num[0] * num[num.size() - 1];
    
    cout << result;
    
    return 0;
}
