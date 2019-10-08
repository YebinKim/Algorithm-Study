//
//  3036.cpp
//  Step14-Math_3 Number Theory and Combinatorics
//
//  Created by 김예빈 on 2019. 10. 1..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int gcd(int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, greater;
    
    cin >> n;
    
    int ring[n];
    
    for(int i = 0; i < n; i++)
        cin >> ring[i];
    
    for(int i = 1; i < n; i++) {
        if(ring[i] > ring[0])
            greater = gcd(ring[i], ring[0]);
        else
            greater = gcd(ring[0], ring[i]);
        
        cout << ring[0] / greater << "/" << ring[i] / greater << "\n";
    }
    
    return 0;
}

int gcd(int a, int b) {
    if(a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
