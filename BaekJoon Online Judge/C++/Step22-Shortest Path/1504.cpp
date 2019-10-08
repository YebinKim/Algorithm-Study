//
//  1504.cpp
//  Step22-Shortest Path
//
//  Created by 김예빈 on 2019. 10. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 987654321;

vector<int> dijkstra(vector<pair<int, int>>*, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int v, e, edge_u, edge_v, edge_w, node1, node2, cost;
    vector<pair<int, int>> graph[801];
    
    cin >> v >> e;
    
    for(int i = 0; i < e; i++) {
        cin >> edge_u >> edge_v >> edge_w;
        
        graph[edge_u].push_back(make_pair(edge_v, edge_w));
        graph[edge_v].push_back(make_pair(edge_u, edge_w));
    }
    
    v++;
    cin >> node1 >> node2;
    
    vector<int> result = dijkstra(graph, 1, v);
    vector<int> temp1 = dijkstra(graph, node1, v);
    vector<int> temp2 = dijkstra(graph, node2, v);
    
    cost = min(result[node1] + temp1[node2] + temp2[v - 1], result[node2] + temp2[node1] + temp1[v - 1]);
    
    if(cost < 0 || cost >= INF)
        cout << -1 << "\n";
    else
        cout << cost << "\n";
    
    return 0;
}

vector<int> dijkstra(vector<pair<int, int>> graph[], int start, int vertex) {
    int cost, curVertex, neighbor, neighborDistance;
    vector<int> dist(vertex, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push(make_pair(0, start));
    
    while(!pq.empty()) {
        cost = pq.top().first;
        curVertex = pq.top().second;
        pq.pop();
        
        if(dist[curVertex] < cost) continue;
        
        for(int i = 0; i < graph[curVertex].size(); i++) {
            neighbor = graph[curVertex][i].first;
            neighborDistance = cost + graph[curVertex][i].second;
            
            if(dist[neighbor] > neighborDistance) {
                dist[neighbor] = neighborDistance;
                pq.push(make_pair(neighborDistance, neighbor));
            }
        }
    }
    
    return dist;
}
