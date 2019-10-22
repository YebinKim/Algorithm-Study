//
//  CountDiv.cpp
//  Lesson05-Prefix Sums
//
//  Created by Yebin Kim on 2019/10/22.
//  Copyright © 2019 김예빈. All rights reserved.
//

// Time Complexity O(1)
int solution(int A, int B, int K) {
    // Using modular arithmetic
    int answer = (A % K == 0 ? 1 : 0);
    int quotA = A / K;
    int quotB = B / K;
    
    return quotB + answer - quotA;
}

// Time Complexity O(B-A)
//int solution(int A, int B, int K) {
//    int answer = 0;
//
//    for(int i = A; i <= B; i++)
//        if(i % K == 0)
//            answer++;
//
//    return answer;
//}
