//
//  7579.cpp
//  Step23-Dynamic Programming_2
//
//  Created by Yebin Kim on 2019/11/08.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

const int MAX = 100;
const int MAXCOST = 10000;

int activeApp[MAX];
int mamoryApp[MAX];
int napSack[MAX][MAXCOST + 1];

int maxMemory(int, int);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M;
    int total = 0;
    
    cin >> N >> M;
    
    memset(napSack, -1, sizeof(napSack));
    for(int i = 0; i < N; i++) cin >> activeApp[i];
    for(int i = 0; i < N; i++) cin >> mamoryApp[i];

    while(1) {
        if(maxMemory(0, total) >= M) {
            cout << total << endl;
            break;
        }
        
        total++;
    }
    
    return 0;
}

int maxMemory(int idx, int total) {
    if (idx >= MAX) return 0;
    
    int &result = napSack[idx][total];
    
    if(result != -1) return result;
    
    result = maxMemory(idx + 1, total);
    
    if(mamoryApp[idx] <= total)
        result = max(result, activeApp[idx] + maxMemory(idx + 1, total - mamoryApp[idx]));
    
    return result;
}
