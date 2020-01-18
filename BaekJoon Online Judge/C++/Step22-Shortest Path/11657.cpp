//
//  11657.cpp
//  Step22-Shortest Path
//
//  Created by Yebin Kim on 2020/01/18.
//  Copyright © 2020 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 2e9;
const int MAX = 500;

// Using Bellman-Ford Algorithm
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M, a, b, c;
    bool cycle = false;
    vector<pair<int, int>> path[MAX + 2];
    int dist[MAX + 2];
    
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        cin >> a >> b >> c;
        path[a].push_back({ b, c });
    }

    fill(dist, dist + MAX + 2, INF);
    dist[1] = 0;
    
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++) {
            vector<pair<int, int>> cur = path[j];
            
            for(int k = 0; k < cur.size(); k++) {
                if(dist[j] != INF && dist[cur[k].first] > cur[k].second + dist[j]) {
                    dist[cur[k].first] = cur[k].second + dist[j];
                    
                    if(i == (N))
                        cycle = true;
                }
            }
        }
    
    if(cycle)
        cout << -1 << "\n";
    else {
        for(int i = 2; i <= N; i++) {
            if(dist[i] == INF)
                cout << -1 << "\n";
            else
                cout << dist[i] << "\n";
        }
    }

    return 0;
}
