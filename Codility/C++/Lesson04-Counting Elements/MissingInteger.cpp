//
//  MissingInteger.cpp
//  Lesson04-Counting Elements
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    int answer = 1;
    set<int> check;
    set<int>::iterator it;
    
    for(int i = 0; i < A.size(); i++)
        if(A[i] > 0)
            check.insert(A[i]);
    
    for(it = check.begin(); it != check.end(); it++) {
        if(*it != answer)
            break;
        else
            answer++;
    }
    
    return answer;
}
