//
//  MinAbsSum.cpp
//  Lesson17-Dynamic programming
//
//  Created by Yebin Kim on 2019/12/09.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>
#include <string.h>

using namespace std;

// Time Complexity O(N * max(abs(A))**2)
int solution(vector<int> &A) {
    int answer = INT_MAX;
    int maxValue = 0, sum = 0;
    
    for(int i = 0; i < A.size(); i++) {
        A[i] = abs(A[i]);
        maxValue = max(maxValue, A[i]);
        sum += A[i];
    }
    
    int cnt[maxValue + 1];
    memset(cnt, 0, sizeof(cnt));
    
    for(int i = 0; i < A.size(); i++)
        cnt[A[i]]++;
    
    //    int S[sum + 1];
    //    memset(S + 1, -1, sizeof(S));
    int S[sum + 1];
    memset(S, -1, sizeof(S));
    S[0] = 0;
    
    for(int i = 1; i <= maxValue; i++) {
        if(cnt[i] > 0) {
            for(int j = 0; j < sum + 1; j++) {
                if(S[j] >= 0)
                    S[j] = cnt[i];
                else if((j >= i) && (S[j - i] > 0))
                    S[j] = S[j - i] - 1;
            }
        }
    }
    
    for(int i = 0; i < sum / 2 + 1; i++) {
        if(S[i] >= 0)
            answer = min(answer, sum - (2 * i));
    }
    
    return answer;
}
