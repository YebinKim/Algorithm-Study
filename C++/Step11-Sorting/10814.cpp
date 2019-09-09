//
//  10814.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 9..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool memSort(pair<int, string>, pair<int, string>);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, age;
    string name;
    vector<pair<int, string>> members;
    vector<pair<int, string>>::iterator iter;
    
    cin >> n;
    
    while(n--) {
        cin >> age >> name;
        members.push_back(make_pair(age, name));
    }
    
    stable_sort(members.begin(), members.end(), memSort);
    
    for(iter = members.begin(); iter != members.end(); iter++)
        cout << iter->first << " " << iter->second << "\n";
    
    return 0;
}

bool memSort(pair<int, string> a, pair<int, string> b) {
    if (a.first < b.first)
        return true;
    else if (a.first == b.first)
        return false;
    else
        return false;
}
