//
//  2750.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019/10/17.
//  Copyright © 2019 김예빈. All rights reserved.
//

#define SWAP(x, y, t) (t=x, x=y, y=t)

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>&);
void insertSort(vector<int>&);

// Using Sorting Algorithms with Time Complexity O(n^2)
int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i;
    
    cin >> n;
    
    vector<int> sort(n);
    
    for(i = 0; i < n; i++)
        cin >> sort[i];
    
    bubbleSort(sort);
//    insertSort(sort);
    
    for(i = 0; i < n; i++)
        cout << sort[i] << "\n";
    
    return 0;
}

void bubbleSort(vector<int>& v) {
    int size = v.size(), temp;
    
    for(int i = 0; i < size; i++)
        for(int j = i + 1; j < size; j++)
            if(v[i] > v[j])
                SWAP(v[i], v[j], temp);
}

void insertSort(vector<int>& v) {
    int i, j, key;
    
    for(i = 1; i < v.size(); i++) {
        key = v[i];
        
        for(j = i - 1; j >= 0; j--) {
            if(v[j] > key)
                v[j + 1] = v[j];
            else
                break;
        }
        
        v[j + 1] = key;
    }
}
