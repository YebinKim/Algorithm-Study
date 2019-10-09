//
//  10830.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 10. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int n;
vector<vector<int>> a;

vector<vector<int>> divide(long long);

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    long long sqrd;
    vector<vector<int>> answer;
    vector<int> temp;
    
    cin >> n >> sqrd;
    
    for(int i = 0; i < n; i++) {
        temp.clear();
        
        for(int j = 0; j < n; j++) {
            cin >> num;
            temp.push_back(num);
        }
        
        a.push_back(temp);
    }
    
    answer = divide(sqrd);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << answer[i][j] << " ";
        
        cout << "\n";
    }
    
    return 0;
}

vector<vector<int>> divide(long long sqrd) {
    vector<vector<int>> b(n, vector<int>(n));
    vector<vector<int>> result(n, vector<int>(n));
    
    if(sqrd == 1) {
        for(int i = 0; i < n; i ++)
            for(int j = 0; j < n; j ++)
                b[i][j] = a[i][j] % 1000;
        
        return b;
    } else if(sqrd % 2 == 0) {
        b = divide(sqrd / 2);
        
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                for (int k = 0; k < n; k ++)
                    result[i][j] += b[i][k] * b[k][j];
                
                result[i][j] %= 1000;
            }
        }
        return result;
    } else {
        b = divide(sqrd - 1);
        
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < n; j ++) {
                for (int k = 0; k < n; k ++)
                    result[i][j] += b[i][k] * a[k][j];
                
                result[i][j] %= 1000;
            }
        }
        return result;
    }
}
