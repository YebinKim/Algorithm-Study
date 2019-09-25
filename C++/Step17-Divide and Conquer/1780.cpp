//
//  1780.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int square[2187][2187];
int num1, num2, num3;

void divide(int, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    num1 = 0;
    num2 = 0;
    num3 = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> square[i][j];
    
    divide(0, 0, n);
    
    cout << num1 << "\n" << num2 << "\n" << num3;
    
    return 0;
}

void divide(int x, int y, int size) {
    int color = square[y][x];
    bool check = true;
    
    for(int i = y; i < y + size; i++) {
        if(!check) break;
        for(int j = x; j < x + size; j++) {
            if(color != square[i][j]) {
                check = false;
                break;
            }
        }
    }
    
    int nSize = size / 3;
    
    if(check) {
        if(color == -1) num1++;
        else if(color == 0) num2++;
        else num3++;
    } else {
        divide(x, y, nSize);
        divide(x, y + nSize, nSize);
        divide(x, y + nSize * 2, nSize);
        
        divide(x + nSize, y, nSize);
        divide(x + nSize, y + nSize, nSize);
        divide(x + nSize, y + nSize * 2, nSize);
        
        divide(x + nSize * 2, y, nSize);
        divide(x + nSize * 2, y + nSize, nSize);
        divide(x + nSize * 2, y + nSize * 2, nSize);
    }
}
