//
//  2580.cpp
//  Step18-Backtracking
//
//  Created by Yebin Kim on 2019/12/10.
//  Copyright © 2019 김예빈. All rights reserved.
//

#include <iostream>

using namespace std;

const int MAX = 9;

int sudoku[MAX][MAX];
bool row[MAX][MAX];
bool col[MAX][MAX];
bool square[MAX][MAX];

void dfs(int);

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            cin >> sudoku[i][j];
            
            if(sudoku[i][j] != 0) {
                row[i][sudoku[i][j]] = true;
                col[j][sudoku[i][j]] = true;
                square[(i / 3) * 3 + (j / 3)][sudoku[i][j]] = true;
            }
        }
    }
    
    dfs(0);
    
    return 0;
}

void dfs(int cnt) {
    if(cnt == 81) {
        for(int i = 0; i < MAX; i++) {
            for(int j = 0; j < MAX; j++)
                cout << sudoku[i][j] << " ";
            
            cout << "\n";
        }
        
        exit(0);
    }
    
    int x = cnt / MAX;
    int y = cnt % MAX;
    
    if(sudoku[x][y] == 0) {
        for(int i = 1; i <= 9; i++) {
            int idx = (x / 3) * 3 + (y / 3);
            
            if(row[x][i] == false && col[y][i] == false && square[idx][i] == false) {
                row[x][i] = true;
                col[y][i] = true;
                square[idx][i] = true;
                
                sudoku[x][y] = i;
                dfs(cnt + 1);
                sudoku[x][y] = 0;
                
                row[x][i] = false;
                col[y][i] = false;
                square[idx][i] = false;
            }
        }
    } else {
        dfs(cnt + 1);
    }
}
