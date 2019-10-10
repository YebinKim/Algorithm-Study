//
//  FrogJmp.cpp
//  Lesson03-Time Complexity
//
//  Created by 김예빈 on 2019. 10. 10..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <cmath>

int solution(int X, int Y, int D) {
    int distance = Y - X;
    int answer = ceil(double(distance) / double(D));
    
    return answer;
}
