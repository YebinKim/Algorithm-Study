//
//  1085.cpp
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
    
    int x, y, w, h, min_x, min_y;
    
    cin >> x >> y >> w >> h;
    
    min_x = w - x;
    min_y = h - y;
    
    if(min_x > x)
        min_x = x;
    
    if(min_y > y)
        min_y = y;
    
    if(min_x < min_y)
        cout << min_x;
    else
        cout << min_y;

    return 0;
}
