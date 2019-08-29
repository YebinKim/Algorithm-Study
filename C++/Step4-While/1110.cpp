//
//  1110.cpp
//  Step3-While
//
//  Created by 김예빈 on 2019. 8. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, a, n1, n2, count = 0;
    
    cin >> n;
    a = n;
    
    do
    {
        n1 = a / 10;
        n2 = a % 10;
        
        a = n2 * 10 + ((n1 + n2) % 10);
        
        count++;
        
    } while(n != a);
    
    cout << count;
    
    return 0;
}
