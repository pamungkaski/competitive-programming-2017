//
// Created by Ki Ageng Satria Pamungkas on 6/7/17.
//
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
string A, B;
int edist(int La, int Lb){
    int dp[La+1][Lb+1];
    for (int i = 0; i <=La ; ++i) {
        for (int j = 0; j <=Lb ; ++j) {
            if(i == 0) {
                dp[i][j] = j;
            } else if(j == 0) {
                dp[i][j] = i;
            } else if(A[i-1] == B[j-1]){
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
            }
        }
    }
    return dp[La][Lb];
}
int main(){
    int t, res;
    cin >> t;
    while(t--){
        int La,Lb;
        cin >> A >> B;
        La = A.length();
        Lb = B.length();
        cout << edist(La,Lb) << endl;
    }
    return 0;
}