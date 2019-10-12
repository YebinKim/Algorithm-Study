//
//  EquiLeader.cpp
//  Lesson08-Leader
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    map<int, int> counter;
    int dominator, answer = 0, cnt = 0, max = 0;
    
    if(A.size() == 1) return answer;
    
    for(int i = 0; i < A.size(); i++) {
        if(counter.find(A[i]) != counter.end()) {
            counter[A[i]] += 1;
            if(max < counter[A[i]]) {
                max = counter[A[i]];
                dominator = A[i];
            }
        } else
            counter.insert(pair<int, int>(A[i], 1));
    }
    
    if(max < A.size() / 2)
        return 0;
    
    for(int i = 0; i < A.size(); i++) {
        if(A[i] == dominator) {
            cnt++;
            counter[dominator]--;
        }
        
        if(counter[dominator] > (A.size() - (i + 1)) / 2 && cnt > (i + 1) / 2)
            answer++;
        
    }
    
    return answer;
}
