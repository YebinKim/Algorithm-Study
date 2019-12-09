//
//  NailingPlanks.cpp
//  Lesson14-Binary search algorithm
//
//  Created by Yebin Kim on 2019/12/09.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

bool cmp(const pair<int,int> &a, const int &b) {
    return a.first < b;
}

int findFirst(int start, int end, vector<pair<int,int>> &nails, int before) {
    auto pos = lower_bound(nails.begin(), nails.end(), start, cmp) - nails.begin();
    int value = nails[pos].first;
    
    if(pos == nails.size() || value > end) return -1;
    
    int answer = INT_MAX;
    int idx = -1;
    
    while(value <= end && pos < nails.size()) {
        idx = nails[pos].second;
        
        if(idx <= before)
            return before;
        
        if(idx < answer)
            answer = idx;
        
        if(++pos < nails.size())
            value = nails[pos].first;
    }
    
    return answer;
}

// Time Complexity O((N + M) * log(M))
int solution(vector<int> &A, vector<int> &B, vector<int> &C) {
    vector<pair<int,int>> indexedNail(C.size(), {0, 0});
    int answer = -1;
    
    for(int i = 0 ; i < C.size(); ++i) {
        indexedNail[i].first = C[i];
        indexedNail[i].second = i;
    }
    
    sort(indexedNail.begin(), indexedNail.end());
    
    for(int i = 0 ; i < A.size(); ++i) {
        answer = findFirst(A[i], B[i], indexedNail, answer);
        
        if(answer == -1)
            return -1;
    }
    
    return answer + 1;
}
