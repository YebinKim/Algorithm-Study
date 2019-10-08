//
//  9375.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 10. 2..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int tc, n, result;
    string clothes, kinds;
    map<string, int> style;
    map<string, int>::iterator it;
    
    cin >> tc;
    
    while(tc--) {
        result = 1;
        style.clear();
        
        cin >> n;
        
        for(int i = 0; i < n; i++) {
            cin >> clothes >> kinds;
            style[kinds]++;
        }
        
        for(it = style.begin(); it != style.end(); it++) {
            result *= (it->second + 1);
        }
        
        cout << --result << "\n";
    }
    
    return 0;
}
