//
//  6549.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 9. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void segmentTree(vector<long long>&, vector<long long>&, int, int, int);
int minHisto(vector<long long>&, vector<long long>&, int, int, int, int, int);
long long getMaxArea(vector<long long>&, vector<long long>&, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    while(1) {
        int n;
        
        cin >> n;
        
        if (n == 0) break;
        
        vector<long long> arr(n + 1);
        
        for(int i = 1; i <= n; i++)
            cin >> arr[i];
        
        int height = (int)ceil(log2(n));
        int tree_size = (1 << (height + 1));
        
        vector<long long> tree(tree_size);
        
        segmentTree(arr, tree, 1, 1, n);
        
        cout << getMaxArea(arr, tree, 1, n) << "\n";
    }
    
    return 0;
}

void segmentTree(vector<long long>& arr, vector<long long>& tree, int node, int start, int end) {
    if (start == end)
        tree[node] = start;
    else {
        int mid = (start + end) / 2;
        
        segmentTree(arr, tree, node * 2, start, mid);
        segmentTree(arr, tree, node * 2 + 1, mid + 1, end);
        
        if(arr[tree[node * 2]] < arr[tree[node * 2 + 1]])
            tree[node] = tree[node * 2];
        else
            tree[node] = tree[node * 2 + 1];
    }
}

int minHisto(vector<long long>& arr, vector<long long>& tree, int node, int start, int end, int i, int j) {
    if(end < i || start > j) return -1;
    else if (i <= start && end <= j) return tree[node];
    
    int mid = (start + end) / 2;
    int left = minHisto(arr, tree, node * 2, start, mid, i, j);
    int right = minHisto(arr, tree, node * 2 + 1, mid + 1, end, i, j);
    
    if (left == -1) return right;
    else if (right == -1) return left;
    
    if (arr[left] > arr[right]) return right;
    else return left;
}

long long getMaxArea(vector<long long>& arr, vector<long long>& tree, int start, int end) {
    int n = arr.size() - 1;
    int idx = minHisto(arr, tree, 1, 1, n, start, end);
    long long area = (end - start + 1) * arr[idx];
    
    if(start < idx) {
        long long temp = getMaxArea(arr, tree, start, idx - 1);
        area = max(area, temp);
    }
    
    if(idx < end) {
        long long temp = getMaxArea(arr, tree, idx + 1, end);
        area = max(area, temp);
    }
    
    return area;
}
