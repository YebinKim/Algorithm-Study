//
//  CommonPrimeDivisors.cpp
//  Lesson12-Euclidean algorithm
//
//  Created by Yebin Kim on 2019/11/23.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int euclidean(int a, int b) {
    if(a % b == 0)
        return b;
    else
        return euclidean(b, a % b);
}

// Time Complexity O(Z * log(max(A) + max(B))**2)
int solution(vector<int> &A, vector<int> &B) {
    int answer = 0;
    int size = A.size();
    
    for(int i = 0; i < size; i++) {
        int gcd = euclidean(A[i], B[i]);
        int gcdA = 0;
        int gcdB = 0;
        
        while(gcdA != 1) {
            gcdA = euclidean(A[i], gcd);
            A[i] = A[i] / gcdA;
        }
        
        while(gcdB != 1) {
            gcdB = euclidean(B[i], gcd);
            B[i] = B[i] / gcdB;
        }
        
        if(A[i] == 1 && B[i] == 1)
            answer++;
    }
    
    return answer;
}
