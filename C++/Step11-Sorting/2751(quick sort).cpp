//
//  2751.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 8..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

// Using Sorting Algorithms with Time Complexity O(nlogn)
void swap(vector<int> &, int, int);
void quickSort(vector<int> &, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i;
    
    cin >> n;
    
    vector<int> sort(n);
    
    for(i = 0; i < n; i++)
        cin >> sort[i];
    
    quickSort(sort, 0, n - 1);
    
    for(i = 0; i < n; i++)
        cout << sort[i] << "\n";
    
    return 0;
}

void swap(vector<int> &v, int a, int b) {
    int temp;
    
    temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

void quickSort(vector<int> &v, int start, int end) {
    int pivot = v[start];
    int left = start + 1;
    int right = end;
    
    while(left <= right) {
        while(v[left] < pivot) left++;
        while(v[right] > pivot) right--;
        
        if(left <= right) swap(v, left, right);
    }
    
    if(start < end) {
        swap(v, start, right);
        
        quickSort(v, start, right - 1);
        quickSort(v, right + 1, end);
    }
}
