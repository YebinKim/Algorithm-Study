//
//  MaxProductOfThree.cpp
//  Lesson06-Sorting
//
//  Created by 김예빈 on 2019. 10. 11..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>

using namespace std;

void quickSort(vector<int> &A, int i, int j) {
    if(i >= j) return;

    int pivot = A[(i + j) / 2];
    int left = i;
    int right = j;

    while(left <= right) {
        while(A[left] < pivot) left++;
        while(A[right] > pivot) right--;

        if(left <= right) {
            swap(A[left], A[right]);
            left++;
            right--;
        }
    }

    quickSort(A, i, right);
    quickSort(A, left, j);
}

int solution(vector<int> &A) {
    int size = A.size() - 1;
    int answer;
    
    quickSort(A, 0, size);
    
    if(A[size] * A[size - 1] * A[size - 2] > A[0] * A[1] * A[size])
        answer = A[size] * A[size - 1] * A[size - 2];
    else
        answer = A[0] * A[1] * A[size];
    
    return answer;
}
