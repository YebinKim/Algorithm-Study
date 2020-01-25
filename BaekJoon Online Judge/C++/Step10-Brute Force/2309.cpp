//
//  2309.cpp
//  Step10-Brute Force
//
//  Created by Yebin Kim on 2020/01/25.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int sum = 0, tall;
    vector<int> height;
    
    for(int i = 0; i < 9; i++) {
        cin >> tall;
        
        height.push_back(tall);
        sum += tall;
    }
    
    sort(height.begin(), height.end());
    
    for(int i = 0; i < 9; i++) {
        for(int j = i + 1; j < 9; j++) {
            if(sum - height[i] - height[j] == 100) {
                for(int k = 0; k < 9; k++) {
                    if(k != i && k != j)
                        cout << height[k] << endl;
                }
                return 0;
            }
        }
    }
    
    return 0;
}
