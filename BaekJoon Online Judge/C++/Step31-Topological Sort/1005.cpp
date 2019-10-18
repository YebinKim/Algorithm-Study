//
//  1005.cpp
//  Step31-Topological Sort
//
//  Created by 김예빈 on 2019. 10. 18..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAX = 1000;

int n;
int cache[MAX + 1], delay[MAX + 1];
int order[MAX + 1][MAX + 1];

int totalTime(int destination);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int tc, k, d, x, y;
    
    cin >> tc;
    
    for(int i = 0; i < tc; i++) {
        cin >> n >> k;
        
        for (int j = 1; j <= n; j++)
            cin >> delay[j];
        
        memset(cache, -1, sizeof(cache));
        memset(order, 0, sizeof(order));
        
        for(int j = 0; j < k; j++) {
            cin >> x >> y;
            order[x][y] = 1;
        }
        
        cin >> d;
        
        if(d < 0 || d > 100000)
            return -1;
        
        cout << totalTime(d) << endl;
    }

    return 0;
}

int totalTime(int destination) {
    int &result = cache[destination];
    
    if(result!=-1) return result;
    
    int time = 0;
    
    for(int i = 1; i <= n; i++)
        if(order[i][destination])
            time = max(time, totalTime(i));
    
    return result = time + delay[destination];
}
