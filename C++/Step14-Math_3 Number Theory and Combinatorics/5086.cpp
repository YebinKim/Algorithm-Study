//
//  5086.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 9. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int first, second;
    
    while(1) {
        cin >> first >> second;
        
        if(first == 0 && second == 0)
            break;
        
        if(first < second && second % first == 0)
            cout << "factor\n";
        else if(first > second && first % second == 0)
            cout << "multiple\n";
        else
            cout << "neither\n";
    }
    
    return 0;
}
