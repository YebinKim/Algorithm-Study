//
//  2751.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

const int MAX = 1000000;
int arr[MAX];
int tempArr[MAX];

// Using Sorting Algorithms with Time Complexity O(nlogn)
void merge(int, int, int);
void mergeSort(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
        cin >> arr[i];
    
    mergeSort(0, n - 1);
    
    for(i = 0; i < n; i++)
        cout << arr[i] << "\n";
    
    return 0;
}

void merge(int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low, l;
    
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
            tempArr[k] = arr[i++];
        else
            tempArr[k] = arr[j++];
        
        k++;
    }
    
    if (i > mid)
        for (l = j; l <= high; l++)
            tempArr[k++] = arr[l];
    else
        for (l = i; l <= mid; l++)
            tempArr[k++] = arr[l];
    
    for (l = low; l <= high; l++)
        arr[l] = tempArr[l];
}

void mergeSort(int low, int high)
{
    int mid;
    
    if (high > low)
    {
        mid = (low + high) / 2;
        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merge(low, mid, high);
    }
}
