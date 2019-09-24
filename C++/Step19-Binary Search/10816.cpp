//
//  10816.cpp
//  Step19-Binary Search
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//bool binarySearch(int, map<int, int>&, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m, searchNum, temp;
    vector<int> numArr;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> temp;
        numArr.push_back(temp);
    }
    
    sort(numArr.begin(), numArr.end());
    
    cin >> m;
    
    for(int i = 0; i < m; i++) {
        cin >> searchNum;
        cout << upper_bound(numArr.begin(), numArr.end(), searchNum) - lower_bound(numArr.begin(), numArr.end(), searchNum) << " ";
    }
    
    return 0;
}

// Timeout
//int main(int argc, const char * argv[]) {
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    int n, m, searchNum, temp;
//    map<int, int> numArr;
//    vector<int> searchArr;
//
//    cin >> n;
//
//    for(int i = 0; i < n; i++) {
//        cin >> temp;
//        numArr[temp]++;
//    }
//
//    cin >> m;
//
//    for(int i = 0; i < m; i++) {
//        cin >> searchNum;
//        cout << numArr[searchNum] << " ";
//    }
//
//    return 0;
//}

//bool binarySearch(int search, map<int, int>& numArr, int start, int end) {
//    int idx = (start + end) / 2;
//
//    if(numArr[idx] == search)
//        return true;
//    else if(end - start < 0)
//        return false;
//
//    if(numArr[idx] < search) {
//        start = idx + 1;
//        return binarySearch(search, numArr, start, end);
//    }
//    else {
//        end = idx - 1;
//        return binarySearch(search, numArr, start, end);
//    }
//}
