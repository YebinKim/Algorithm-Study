//
//  2742.cpp
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
    
    int n, i;
    
    cin >> n;
    
    for (i = n; i >= 1; i--)
        cout << i << "\n";
    
    return 0;
}
