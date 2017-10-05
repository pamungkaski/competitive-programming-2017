//
// Created by Ki Ageng Satria Pamungkas on 9/25/17.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> stall;
    int C, N, T, dmy;
    cin >> T;
    while (T--) {
        cin >> N >> C;
        for (int i = 0; i < N; ++i) {
            cin >> dmy;
            stall.push_back(dmy);
        }
        sort(stall.begin(), stall.end());
        int low = 0;
        int high = stall[N-1] - stall[0];
    }
    return 0;
}