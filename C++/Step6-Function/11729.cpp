//
//  11729.cpp
//  Step6-Function
//
//  Created by 김예빈 on 2019. 8. 31..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int hanoisTop(int, int, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, move;
    
    cin >> n;
    
    move = pow(2, n) - 1;
    
    cout << move << "\n";
    hanoisTop(n, 1, 2, 3);
    
    return 0;
}

int hanoisTop(int n, int from, int tmp, int to) {
    int count = 0;
    
    if (n == 1) {
        cout << from << " " <<  to << "\n";
    } else {
        hanoisTop(n - 1, from, to, tmp);
        cout << from << " " <<  to << "\n";
        hanoisTop(n - 1, tmp, from, to);
    }
    
    return count;
}
