//
//  3053.cpp
//  Step9-Math_2 Prime and Geometric
//
//  Created by 김예빈 on 2019. 9. 5..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.precision(6);
    cout << fixed;
    
    double r;
    
    cin >> r;
    
    cout << r * r * M_PI << "\n";
    cout << r * r * 2.0 << "\n";

    return 0;
}
