//
//  FibFrog.cpp
//  Lesson13-Fibonacci numbers
//
//  Created by Yebin Kim on 2019/11/28.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

// Time Colmplexity O(N * log(N))
int solution(vector<int> &A) {
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    
    for(int i = 2; fib.back() <= A.size() + 1; i++)
        fib.push_back(fib[i - 1] + fib[i - 2]);
    
    reverse(fib.begin(), fib.end());
    
    int pos = -1;
    vector<bool> wait(A.size(), false);
    
    queue<pair<int, int>> leaves;
    leaves.push(make_pair(pos, 0));
    
    while(!leaves.empty()) {
        pair<int, int> leaf = leaves.front();
        leaves.pop();
        
        for(const auto &f : fib) {
            pos = leaf.first + f;
            
            if(pos == A.size()) {
                return leaf.second + 1;
            } else if(pos < A.size() && A[pos] == 1 && !wait[pos]) {
                leaves.push(make_pair(pos, leaf.second + 1));
                wait[pos] = true;
            }
        }
    }
    
    return -1;
}
