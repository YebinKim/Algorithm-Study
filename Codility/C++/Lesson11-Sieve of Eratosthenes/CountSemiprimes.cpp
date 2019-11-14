//
//  CountSemiprimes.cpp
//  Lesson11-Sieve of Eratosthenes
//
//  Created by Yebin Kim on 2019/11/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Time Complexity O(N * log(log(N)) + M)
vector<int> solution(int N, vector<int> &P, vector<int> &Q) {
    vector<int> answer;
    vector<int> prime;
    vector<int> semiPrime;
    set<int> set;
    
    prime.push_back(2);
    set.insert(2);
    
    for(int i = 3; i <= N; i++) {
        int idx;
        
        for(idx = 0; idx < prime.size(); idx++) {
            if(i % prime[idx] == 0) {
                if(set.count(i / prime[idx]) != 0)
                    semiPrime.push_back(i);
                
                break;
            }
        }
        
        if(idx == prime.size()) {
            prime.push_back(i);
            set.insert(i);
        }
    }
    
    for(int i = 0; i < P.size(); i++){
        int begin = P[i];
        int end = Q[i];
        
        vector<int>::iterator low = lower_bound(semiPrime.begin(),semiPrime.end(),begin);
        vector<int>::iterator high = upper_bound(semiPrime.begin(),semiPrime.end(),end);
        
        answer.push_back(high - low);
    }
    
    return answer;
}
