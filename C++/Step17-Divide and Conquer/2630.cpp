//
//  2630.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int square[128][128];
int w = 0, b = 0;

void divide(int, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;

    cin >> n;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> square[i][j];
    
    divide(0, 0, n);
    
    cout << w << "\n" << b << "\n";

    return 0;
}

void divide(int x, int y, int size) {
    int color = square[x][y];
    
    for(int i = x; i < x + size; i++) {
        for(int j = y; j < y + size; j++) {
            if(color != square[i][j]) {
                divide(x, y, size / 2);
                divide(x + size / 2, y, size / 2);
                divide(x, y + size / 2, size / 2);
                divide(x + size / 2, y + size / 2, size / 2);
                return;
            }
        }
    }
    
    if(color == 0)
        w++;
    else
        b++;
}
