//
//  2749.cpp
//  Step17-Divide and Conquer
//
//  Created by 김예빈 on 2019. 10. 15..
//  Copyright © 2019년 김예빈. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000;
long long n;

vector<vector<long long>> divide(vector<vector<long long>>, vector<vector<long long>>);

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    vector<vector<long long>> matrix = { { 1, 1 }, { 1, 0 } };
    vector<vector<long long>> answer = { { 1, 0 }, { 0, 1 } };
    
    cin >> n;
    
    n--;
    
    while(n > 0) {
        if(n % 2 == 1)
            answer = divide(answer, matrix);
        
        matrix = divide(matrix, matrix);
        n /= 2;
    }
    
    cout << answer[0][0];
    
    return 0;
}

vector<vector<long long>> divide(vector<vector<long long>> a, vector<vector<long long>> b) {
    vector<vector<long long>> result = { { 0, 0 }, { 0, 0 } };
    
    for(int i = 0; i < 2; i ++)
        for(int j = 0; j < 2; j ++)
            for (int k = 0; k < 2; k ++)
                result[i][j] = (result[i][j] + a[i][k] * b[k][j]) % MOD;
    
    return result;
}
