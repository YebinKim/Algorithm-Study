//
//  Flags.cpp
//  Lesson10-Prime and composite numbers
//
//  Created by Yebin Kim on 2019/11/20.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// Time Complexity O(N)
int solution(vector<int> &A) {
    int answer = 0;
    vector<int> peaks;
    
    for(int i = 1; i < A.size() - 1; i++)
        if(A[i] > A[i - 1] && A[i] > A[i + 1])
            peaks.push_back(i);
    
    if(peaks.size() < 3)
        return peaks.size();
    
    for(int K = 2; K <= peaks.size(); K++) {
        int flags = 1;
        int cur = 0, next = 1;
        
        while(cur < peaks.size() - 1) {
            if(abs(peaks[cur] - peaks[next]) >= K) {
                flags++;
                cur = next;
                next = cur + 1;
            } else {
                next++;
            }
            
            if(next == peaks.size() || flags == K) break;
        }
        
        if(answer > flags)
            return answer;
        else
            answer = flags;
    }
    
    return answer;
}
