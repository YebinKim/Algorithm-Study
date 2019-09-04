//
//  10250.cpp
//  Step8-Math_1 Mathematical Thinking
//
//  Created by 김예빈 on 2019. 9. 4..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int repeat, h, w, n, floor, remain;
    
    cin >> repeat;
    
    while(repeat--) {
        cin >> h >> w >> n;
        
        n--;
        floor = (n % h + 1) * 100;
        remain = n / h + 1;
        
        cout << floor + remain << "\n";
    }
    
    return 0;
}
