//
//  11650.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 9..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, x, y;
    vector<pair<int, int>> coordinates;
    vector<pair<int, int>>::iterator iter;
    
    cin >> n;
    
    while(n--) {
        cin >> x >> y;
        coordinates.push_back(make_pair(x, y));
    }
    
    sort(coordinates.begin(), coordinates.end());
    
    for(iter = coordinates.begin(); iter != coordinates.end(); iter++)
        cout << iter->first << " " << iter->second << "\n";
    
    return 0;
}
