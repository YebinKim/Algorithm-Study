//
//  14889.cpp
//  Step18-Backtracking
//
//  Created by Yebin Kim on 2019/12/11.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <limits.h>
#include <algorithm>
#include <vector>

using namespace std;

int N, answer = INT_MAX;
int team[21][21];
vector<int> A;
vector<int> B;

void dfs(int);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> N;
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> team[i][j];
    
    dfs(0);
    
    cout << answer;
    
    return 0;
}

void dfs(int idx) {
    if(idx >= N) {
        if(A.size() == B.size()) {
            int sumA = 0;
            int sumB = 0;
            
            for(int i = 0; i < A.size(); i++)
                for(int j = i + 1; j < A.size(); j++)
                    sumA += team[A[i]][A[j]] + team[A[j]][A[i]];
            
            for(int i = 0; i < B.size(); i++)
                for(int j = i + 1; j < B.size(); j++)
                    sumB += team[B[i]][B[j]] + team[B[j]][B[i]];
            
            answer = min(answer, abs(sumA - sumB));
        }
        
        return;
    }
    
    A.push_back(idx);
    dfs(idx + 1);
    A.pop_back();
    
    B.push_back(idx);
    dfs(idx + 1);
    B.pop_back();
    
    return;
}
