//
//  Binary-gap.cpp
//  Lesson01-Iterations
//
//  Created by 김예빈 on 2019. 10. 8..
//  Copyright © 2019년 김예빈. All rights reserved.
//

int solution(int N) {
    bool start = false;
    int cnt = 0, answer = 0;
    
    while(N >= 2) {
        if(N % 2 == 0) {
            if(start)
                cnt++;
        } else {
            if(!start)
                start = true;
            else {
                if(answer < cnt)
                    answer = cnt;
                
                cnt = 0;
            }
        }
        
        N /= 2;
    }
    
    if(answer < cnt)
        answer = cnt;
    
    return answer;
}
