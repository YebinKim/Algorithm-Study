//
//  OddOccurrencesInArray.cpp
//  Lesson02-Arrays
//
//  Created by 김예빈 on 2019. 10. 9..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    int answer = 0;
    
    for(int i = 0; i < A.size(); i++)
        answer ^= A[i];
    
    return answer;
}

// Time Complexity O(N) or O(N*log(N))
//int solution(vector<int> &A) {
//    map<int, int> check;
//    map<int, int>::iterator it;
//    int answer = 0;
//
//    for(int i = 0; i < A.size(); i++)
//        check[A[i]]++;
//
//    for(it = check.begin(); it != check.end(); it++) {
//        if(it->second % 2 == 1)
//            answer = it->first;
//    }
//
//    return answer;
//}
