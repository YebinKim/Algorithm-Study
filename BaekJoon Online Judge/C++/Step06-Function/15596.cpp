//
//  15596.cpp
//  Step6-Function
//
//  Created by 김예빈 on 2019. 8. 31..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <vector>
long long sum(std::vector<int> &a) {
    long long ans = 0;
    
    for (std::vector<int>::iterator itr = a.begin(); itr < a.end(); itr++) {
        ans += *itr;
    }
    
    return ans;
}
