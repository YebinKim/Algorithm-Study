//
//  GenomicRangeQuery.cpp
//  Lesson05-Prefix Sums
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
#include <string>
#include <string.h>

using namespace std;

// Time Complexity O(N + M)
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    vector<int> answer;
    int size = P.size(), impact;
    int A[S.length() + 1], C[S.length() + 1], G[S.length() + 1];
    
    memset(A, 0, sizeof(A));
    memset(C, 0, sizeof(C));
    memset(G, 0, sizeof(G));
    
    for(int i = 0; i < S.length(); i++) {
        switch(S[i]) {
            case 'A':
                A[i + 1]++;
                break;
            case 'C':
                C[i + 1]++;
                break;
            case 'G':
                G[i + 1]++;
                break;
            default:
                break;
        }
        
        A[i + 1] += A[i];
        C[i + 1] += C[i];
        G[i + 1] += G[i];
    }
    
    for(int i = 0; i < size; i++) {
        int start = P[i];
        int end = Q[i];
        
        if(start == end) {
            switch(S[start]) {
                case 'A':
                    impact = 1;
                    break;
                case 'C':
                    impact = 2;
                    break;
                case 'G':
                    impact = 3;
                    break;
                case 'T':
                    impact = 4;
                    break;
            }
        } else if(A[start] != A[end + 1]) {
            impact = 1;
        } else if(C[start] != C[end + 1]) {
            impact = 2;
        } else if(G[start] != G[end + 1]) {
            impact = 3;
        } else {
            impact = 4;
        }
        
        answer.push_back(impact);
    }
    
    return answer;
}

// Time Complexity O(N * M)
//vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
//    vector<int> answer;
//    int size = P.size(), impact;
//
//    for(int i = 0; i < size; i++) {
//        impact = 5;
//
//        for(int j = P[i]; j <= Q[i]; j++) {
//            if(S[j] == 'A')
//                impact = 1;
//            else if(S[j] == 'C' && impact > 2)
//                impact = 2;
//            else if(S[j] == 'G' && impact > 3)
//                impact = 3;
//            else if(S[j] == 'T' && impact > 4)
//                impact = 4;
//        }
//
//        answer.push_back(impact);
//    }
//
//    return answer;
//}
