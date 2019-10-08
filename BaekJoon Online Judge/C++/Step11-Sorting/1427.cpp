//
//  1427.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 9..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    
    cin >> n;
    
    vector<int> num;
    
    while(n > 0) {
        num.push_back(n % 10);
        n /= 10;
    }
    
    sort(num.begin(), num.end(), greater<int>());
    
    for(int i = 0; i < num.size(); i++)
        cout << num[i];
    
    return 0;
}
