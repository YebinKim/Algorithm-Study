//
//  2740.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 10. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, k, num, result;
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<int> temp;
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++) {
        temp.clear();
        
        for(int j = 0; j < m; j++) {
            cin >> num;
            temp.push_back(num);
        }
        
        a.push_back(temp);
    }
    
    cin >> m >> k;
    
    for(int i = 0; i < m; i++) {
        temp.clear();
        
        for(int j = 0; j < k; j++) {
            cin >> num;
            temp.push_back(num);
        }
        
        b.push_back(temp);
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            result = 0;
            
            for(int x = 0; x < m; x++) {
                result += a[i][x] * b[x][j];
            }
            
            cout << result << " ";
        }
        
        cout << "\n";
    }
    
    return 0;
}
