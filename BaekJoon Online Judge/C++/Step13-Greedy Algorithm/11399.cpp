//
//  11399.cpp
//  Step13-Greedy Algorithm
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, temp, sum, i;
    
    cin >> n;
    
    vector<int> people;
    
    for(i = 0; i < n; i++) {
        cin >> temp;
        people.push_back(temp);
    }
    
    sort(people.begin(), people.end());
    sum = people.at(0);
    
    for(i = 1; i < n; i++) {
        people[i] += people[i - 1];
        sum += people[i];
    }
    
    cout << sum;
    
    return 0;
}
