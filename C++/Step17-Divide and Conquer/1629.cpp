//
//  1629.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 9. 24..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int divide(int, int, int);

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << divide(a, b, c);
    
    return 0;
}

int divide(int a, int b, int c) {
    if(b == 1)
        return a % c;
    else {
        long long temp = divide(a, b / 2, c);
        if (b % 2)
            return ((temp*temp) % c * a) % c;
        else
            return (temp*temp) % c;
    }
}

// Memory exceed
//#include <iostream>
//using namespace std;
//
//int divide(int, int, int);
//
//int main(int argc, const char * argv[]) {
//    cin.tie(NULL);
//    ios::sync_with_stdio(false);
//
//    int a, b, c;
//
//    cin >> a >> b >> c;
//
//    cout << divide(a, b, c);
//
//    return 0;
//}
//
//int divide(int a, int b, int c) {
//    if(b == 1)
//        return a % c;
//    else
//        return (a * divide(a, b - 1, c)) % c;
//}
