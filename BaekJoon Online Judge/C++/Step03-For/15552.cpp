//
//  15552.cpp
//  Step3-For
//
//  Created by 김예빈 on 2019. 8. 29..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, a, b, i;
    
    cin >> n;
    
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    
    return 0;
}
