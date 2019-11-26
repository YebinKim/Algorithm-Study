//
//  MinMaxDivision.cpp
//  Lesson14-Binary search algorithm
//
//  Created by Yebin Kim on 2019/11/26.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int check(int num, int K, vector<int> &A, int N) {
    int idx = 0, sum = 0;
    
    while(idx < N) {
        if(A[idx] > num) return 0;
        
        sum += A[idx];
        
        if(sum > num) {
            sum = A[idx];
            K--;
            
            if(K == 0) return 0;
        }
        
        idx++;
    }
    
    return 1;
}

// Time Complexity O(N*log(N+M))
int solution(int K, int M, vector<int> &A) {
    int max = -1, sum = 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[0] > max)
            max = A[0];
        
        sum += A[i];
    }
    
    int low = max;
    int high = sum;
    int answer = sum;
    
    while(low <= high) {
        int mid = (low + high) / 2;
        
        if(check(mid, K, A, A.size())) {
            answer = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }
    
    return answer;
}
