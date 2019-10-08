//
//  2750.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

// Using Sorting Algorithms with Time Complexity O(n^2)
void insertSort(vector<int> &);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i;
    
    cin >> n;
    
    vector<int> sort(n);
    
    for(i = 0; i < n; i++)
        cin >> sort[i];
    
    insertSort(sort);
    
    for(i = 0; i < n; i++)
        cout << sort[i] << "\n";
    
    return 0;
}

void insertSort(vector<int> &v) {
    int key, i, j;
    
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
