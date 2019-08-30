//
//  1546.cpp
//  Step5-1D Array
//
//  Created by 김예빈 on 2019. 8. 30..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cout.precision(10);
    
    int n, max = 0, i;
    double sum = 0, avg;
    
    cin >> n;
    
    double score[n];
    
    for (i = 0; i < n; i++)
    {
        cin >> score[i];
        
        if (score[i] > max)
            max = score[i];
    }
    
    for (i = 0; i < n; i++)
        sum += double(score[i] / max) * 100.0;
    
    avg = double(sum / n);
    
    cout << avg;
    
    return 0;
}
