//
//  1753.cpp
//  Step22-Shortest Path
//
//  Created by 김예빈 on 2019. 10. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

const int INF = INT_MAX;

vector<int> dijkstra(vector<pair<int, int>>*, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int v, e, k, source, destination, cost;
    vector<pair<int, int>> graph[20001];
    
    cin >> v >> e >> k;
    
    for(int i = 0; i < e; i++) {
        cin >> source >> destination >> cost;
        graph[source].push_back(make_pair(destination, cost));
    }
    
    v++;
    vector<int> result = dijkstra(graph, k, v);
    
    for(int i = 1; i < v; i++) {
        if(result[i] == INF)
            cout << "INF" << "\n";
        else
            cout << result[i] << "\n";
    }
    
    return 0;
}

vector<int> dijkstra(vector<pair<int, int>> graph[], int start, int vertex) {
    int cost, curVertex, neighbor, neighborDistance;
    vector<int> dist(vertex, INF);
    priority_queue<pair<int, int>> pq;
    
    dist[start] = 0;
    pq.push(make_pair(0, start));
    
    while(!pq.empty()) {
        cost = -pq.top().first;
        curVertex = pq.top().second;
        pq.pop();
        
        if(dist[curVertex] < cost) continue;
        
        for(int i = 0; i < graph[curVertex].size(); i++) {
            neighbor = graph[curVertex][i].first;
            neighborDistance = cost + graph[curVertex][i].second;
            
            if(dist[neighbor] > neighborDistance) {
                dist[neighbor] = neighborDistance;
                pq.push(make_pair(-neighborDistance, neighbor));
            }
        }
    }
    
    return dist;
}
