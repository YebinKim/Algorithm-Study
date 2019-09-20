//
//  1992.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 9. 20..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int square[64][64];

void divide(int, int, int);

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%1d", &square[i][j]);
    
    divide(0, 0, n);
    
    return 0;
}

void divide(int x, int y, int size) {
    int color = square[y][x];
    bool check = true;
    
    if(size == 1) {
        printf("%d", color);
        return;
    }
    
    for(int i = y; i < y + size; i++) {
        if(!check) break;
        for(int j = x; j < x + size; j++) {
            if(color != square[i][j]) {
                check = false;
                break;
            }
        }
    }
    
    if(check)
        printf("%d", color);
    else {
        printf("(");
        divide(x, y, size / 2);
        divide(x + size / 2, y, size / 2);
        divide(x, y + size / 2, size / 2);
        divide(x + size / 2, y + size / 2, size / 2);
        printf(")");
    }
}
