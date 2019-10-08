//
//  2217.cpp
//  Step13-Greedy Algorithm
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, temp, min, i;
    long long max = 0, weight = 0;
    
    cin >> n;
    
    vector<int> rope;
    
    for(i = 0; i < n; i++) {
        cin >> temp;
        rope.push_back(temp);
    }
    
    sort(rope.begin(), rope.end());
    
    for(i = 0; i < rope.size(); i++) {
        min = rope.at(i);
        weight = min * (rope.size() - i);
        
        if(max < weight)
            max = weight;
    }
    
    cout << max;
    
    return 0;
}
