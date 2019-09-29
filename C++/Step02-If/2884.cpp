//
//  2884.cpp
//  Step2-If
//
//  Created by 김예빈 on 2019. 8. 28..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int hour, min;
    
    cin >> hour >> min;
    
    if (min >= 45)
        min -= 45;
    else
    {
        hour -= 1;
        min = 60 - abs(min - 45);
    }
    
    if (hour < 0)
        hour += 24;
    
    cout << hour << " " << min;
    
    return 0;
}
