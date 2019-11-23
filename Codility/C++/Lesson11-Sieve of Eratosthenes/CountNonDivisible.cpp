//
//  CountNonDivisible.cpp
//  Lesson11-Sieve of Eratosthenes
//
//  Created by Yebin Kim on 2019/11/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Time Complexity O(N * log(N))
vector<int> solution(vector<int> &A) {
    vector<int> answer;
    map<int, int> appear;
    
    for(int i = 0; i < A.size(); i++)
        appear[A[i]]++;
    
    for(int i = 0; i < A.size(); i++) {
        int cnt = 0;
        
        for(int j = 1; j * j <= A[i]; j++) {
            if(A[i] % j == 0) {
                cnt += appear[j];
                if(A[i] / j != j)
                    cnt += appear[A[i] / j];
            }
        }
        
        answer.push_back(A.size() - cnt);
    }
    
    return answer;
}
