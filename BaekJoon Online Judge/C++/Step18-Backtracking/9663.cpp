//
//  9663.cpp
//  Step18-Backtracking
//
//  Created by 김예빈 on 2019/10/19.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int answer = 0;
int board[15];

void placeQ(int n, int y);
bool check(int y);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;

    placeQ(n, 0);
    cout << answer << endl;

    return 0;
}

void placeQ(int n, int y) {
    if(y == n)
        answer += 1;
    else {
        for(int x = 0; x < n; x++) {
            board[y] = x;
            
            if(check(y))
                placeQ(n, y + 1);
        }
    }
}

bool check(int y) {
    for(int x = 0; x < y; x++)
        if(board[x] == board[y] || abs(board[y] - board[x]) == (y - x))
            return false;
    
    return true;
}
