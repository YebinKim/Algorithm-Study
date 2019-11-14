//
//  Triangle.cpp
//  Lesson06-Sorting
//
//  Created by Yebin Kim on 2019/11/14.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Time Complexity O(N*log(N))
int solution(vector<int> &A) {
    
    if(A.size() < 3) return 0;
    
    sort(A.begin(), A.end());
    
    // extreme_arith_overflow1
    // overflow test, 3 MAXINTs
    // solution
    for(int i = 2; i < A.size(); i++) {
        long long P = A[i - 2];
        long long Q = A[i - 1];
        long long R = A[i];
        
        if(R < P + Q) return 1;
    }
    
    return 0;
}
