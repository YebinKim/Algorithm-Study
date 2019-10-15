//
//  2261.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 10. 15..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

// reference - http://blog.naver.com/PostView.nhn?blogId=jhc9639&logNo=221279274120&categoryNo=110&parentCategoryNo=110&viewDate=&currentPage=1&postListTopCurrentPage=1&from=postView
struct P {
    int x, y;
    
    P() {    }
    
    P(int x, int y): x(x), y(y){}
    
    bool operator < (const P & p) const {
        if(y == p.y)
            return x < p.x;
        
        return y < p.y;
    }
    
    bool operator == (const P & p) const {
        return x == p.x && y == p.y;
    }
};

bool compare(const P & a, const P & b) {
    return a.x < b.x;
}

inline int pow2(int n){ return n * n; }
inline int dist(P a, P b){ return pow2(a.x - b.x) + pow2(a.y - b.y); }

// Using line sweeping
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, start = 0, answer;
    set<P> complete;
    set<P>::iterator low;
    set<P>::iterator high;
    set<P>::iterator it;
    
    cin >> n;
    
    vector<P> pos(n);
    
    for(int i = 0; i < n; i++)
        cin >> pos[i].x >> pos[i].y;
    
    sort(pos.begin(), pos.end(), compare);
    
    answer = dist(pos[0], pos[1]);
    
    complete.insert(pos[0]);
    complete.insert(pos[1]);
    
    for(int i = 2; i < n; i++) {
        while(start < i) {
            if(abs(pos[i].x - pos[start].x) > answer)
                complete.erase(pos[start++]);
            else
                break;
        }
        
        int d = sqrt(answer);
        low = complete.lower_bound(P(-10000, pos[i].y - d));
        high = complete.upper_bound(P(10000, pos[i].y + d));
        
        for(it = low; it != high; it++)
            answer = min(answer, dist(pos[i], *it));
        
        complete.insert(pos[i]);
    }
    
    cout << answer << "\n";
    
    return 0;
}

// Timeout
//int dist(pair<int, int>, pair<int, int>);
//
//// Using line sweeping
//int main(int argc, const char * argv[]) {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, start = 0, answer;
//    set<pair<int, int>> complete;
//    set<pair<int, int>>::iterator low;
//    set<pair<int, int>>::iterator high;
//    set<pair<int, int>>::iterator it;
//
//    cin >> n;
//
//    vector<pair<int, int>> pos(n);
//
//    for(int i = 0; i < n; i++)
//        cin >> pos[i].first >> pos[i].second;
//
//    sort(pos.begin(), pos.end());
//
//    answer = dist(pos[0], pos[1]);
//
//    complete.insert(pos[0]);
//    complete.insert(pos[1]);
//
//    for(int i = 2; i < n; i++) {
//        while(start < i) {
//            if(abs(pos[i].first - pos[start].first) > answer)
//                complete.erase(pos[start++]);
//            else
//                break;
//        }
//
//        int d = sqrt(answer);
//        low = complete.lower_bound(pair<int, int>(-10000, pos[i].second - d));
//        high = complete.upper_bound(pair<int, int>(10000, pos[i].second + d));
//
//        for(it = low; it != high; it++)
//            answer = min(answer, dist(pos[i], *it));
//
//        complete.insert(pos[i]);
//    }
//
//    cout << answer << "\n";
//
//    return 0;
//}
//
//int dist(pair<int, int> a, pair<int, int> b) {
//    int distance = pow(b.first - a.first, 2) + pow(b.second - a.second, 2);
//    return distance;
//}
