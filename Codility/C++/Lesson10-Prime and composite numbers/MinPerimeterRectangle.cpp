//
//  MinPerimeterRectangle.cpp
//  Lesson10-Prime and composite numbers
//
//  Created by Yebin Kim on 2019/11/12.
//  Copyright © 2019 김예빈. All rights reserved.
//

// Time Complexity O(sqrt(N))
int solution(int N) {
    int min = 1;
    int answer;
    
    for(int i = 1; i * i <= N; i++) {
        if(N % i == 0) {
            if(i > N / i)
                break;
            
            min = i;
        }
    }
    
    answer = (min + N / min) * 2;
    
    return answer;
}
