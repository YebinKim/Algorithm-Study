//
//  12015.cpp
//  Step19-Binary Search
//
//  Created by 김예빈 on 2019. 10. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, temp;
    vector<int> a;
    vector<int>::iterator it;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        
        if(a.empty() || a.back() < temp)
            a.push_back(temp);
        else {
            it = lower_bound(a.begin(), a.end(), temp);
            *it = temp;
        }
    }
    
    cout << a.size();
    
    return 0;
}
