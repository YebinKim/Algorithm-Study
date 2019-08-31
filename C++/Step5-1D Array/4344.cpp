//
//  4344.cpp
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
    cout.precision(3);
    
    int num, student, sum, count, i;
    double avg, ratio;
    
    cin >> num;
    
    while (num > 0)
    {
        sum = count = ratio = 0;
        
        cin >> student;
        
        int *score = new int [student];
        
        for (i = 0; i < student; i++)
        {
            cin >> score[i];
            sum += score[i];
        }
        
        avg = double(sum / student);
        
        for (i = 0; i < student; i++)
        {
            if (score[i] > avg)
                count++;
        }
        
        ratio = double(count) / student * 100.0;
        cout << fixed << ratio << "%" << endl;
        
        num--;
    }
    
    return 0;
}
