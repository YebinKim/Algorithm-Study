//
//  1931.cpp
//  Step13-Greedy Algorithm
//
//  Created by 김예빈 on 2019. 9. 6..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, start, end, prior = 0, first, second, result = 0, i;
    vector<pair<int, int>> meeting;
    
    cin >> n;
    
    for(i = 0; i < n; i++) {
        cin >> start >> end;
        meeting.push_back(make_pair(end, start));
    }
    
    sort(meeting.begin(), meeting.end());
    
    for (i = 0; i < meeting.size(); i++) {
        first = meeting[i].first;
        second = meeting[i].second;

        if(prior <= second) {
            prior = first;
            result++;
        }
    }

    cout << result;
    
    return 0;
}
