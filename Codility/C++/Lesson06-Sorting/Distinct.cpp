//
//  Distinct.cpp
//  Lesson06-Sorting
//
//  Created by Yebin Kim on 2019/10/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <vector>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    set<int> set;
    
    for(int i = 0; i < A.size(); i++)
        set.insert(A[i]);
    
    return set.size();
}
