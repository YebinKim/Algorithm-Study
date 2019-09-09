//
//  1181.cpp
//  Step11-Sorting
//
//  Created by 김예빈 on 2019. 9. 9..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool dicSort(string, string);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    string str;
    vector<string> dictionary;
    vector<string>::iterator iter;
    vector<string>::iterator end;
    
    cin >> n;
    
    while(n--) {
        cin >> str;
        dictionary.push_back(str);
    }
    
    sort(dictionary.begin(), dictionary.end(), dicSort);
    end = unique(dictionary.begin(), dictionary.end());
    
    for(iter = dictionary.begin(); iter != end; iter++)
        cout << *iter << "\n";
    
    return 0;
}

bool dicSort(string a, string b) {
    if(a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}
