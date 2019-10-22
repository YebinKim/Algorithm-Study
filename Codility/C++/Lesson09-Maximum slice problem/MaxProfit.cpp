//
//  MaxProfit.cpp
//  Lesson09-Maximum slice problem
//
//  Created by Yebin Kim on 2019/10/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    int size = A.size();
    
    if(size == 1 || size == 0) return 0;
    
    int maxValue = 0, minValue = A[0], cur = 0;
    
    for(int i = 1; i < size; i++) {
        cur = max(0, A[i] - minValue);
        minValue = min(minValue, A[i]);
        maxValue = max(cur, maxValue);
    }
    
    return maxValue;
}
