//
//  4153.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a, b, c;
    
    while(1) {
        cin >> a >> b >> c;
        
        if(!a && !b && !c)
            break;
        
        a *= a;
        b *= b;
        c *= c;
        
        if(a + b == c || a + c == b || b + c == a)
            cout << "right\n";
        else
            cout << "wrong\n";
    }
    return 0;
}
