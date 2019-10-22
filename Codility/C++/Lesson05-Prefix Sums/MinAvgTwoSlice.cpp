//
//  MinAvgTwoSlice.cpp
//  Lesson05-Prefix Sums
//
//  Created by Yebin Kim on 2019/10/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int idx = 0;
    double min = (A[0] + A[1]) / 2;
    double avgTwo = 0, avgThree = 0;
    
    if(A.size() < 2) return 0;
    
    for(int i = 2; i < A.size(); i++) {
        avgThree = (A[i - 2] + A[i - 1] + A[i]) / 3.0;
        avgTwo = (A[i - 1] + A[i]) / 2.0;
        
        if(avgTwo < min) {
            min = avgTwo;
            idx = i - 1;
        }
        
        if(avgThree < min) {
            min = avgThree;
            idx = i - 2;
        }
    }
    
    return idx;
}
