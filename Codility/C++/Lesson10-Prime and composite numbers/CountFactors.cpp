//
//  CountFactors.cpp
//  Lesson10-Prime and composite numbers
//
//  Created by Yebin Kim on 2019/11/09.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <cmath>

// Time Complexity O(sqrt(N))
int solution(int N) {
    int answer = 0;
    int num = sqrt(N);
    
    while(num > 0) {
        if(N % num == 0) {
            if(N / num == num)
                answer += 1;
            else
                answer += 2;
        }
        
        num--;
    }
    
    return answer;
}
