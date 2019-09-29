//
//  1002.cpp
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
    
    int repeat, dist, diff, sum, x_1, y_1, r_1, x_2, y_2, r_2;
    
    cin >> repeat;
    
    while(repeat--) {
        cin >> x_1 >> y_1 >> r_1 >> x_2 >> y_2 >> r_2;
        
        dist = (x_1 - x_2) * (x_1 - x_2) + (y_1 - y_2) * (y_1 - y_2);
        diff = (r_1 - r_2) * (r_1 - r_2);
        sum = (r_1 + r_2) * (r_1 + r_2);
        
        if(dist == 0)
            if(diff == 0)
                cout << "-1\n";
            else
                cout << "0\n";
        
        else if(dist == sum || dist == diff)
            cout << "1\n";
        
        else if(diff < dist && dist < sum)
            cout << "2\n";
        
        else
            cout << "0\n";
    }

    return 0;
}
