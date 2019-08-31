//
//  2447.cpp
//  Step6-Function
//
//  Created by 김예빈 on 2019. 8. 31..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

void printStar(int, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, i, j;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printStar(i, j, n);
        
        cout << '\n';
    }
    
    return 0;
}

void printStar(int x, int y, int size) {
    int mid = size / 3;
    
    if (((x / size) % 3 == 1) && ((y / size) % 3 == 1))
        cout << ' ';
    else {
        if (mid == 0)
            cout << '*';
        else
            printStar(x, y, mid);
    }
}
