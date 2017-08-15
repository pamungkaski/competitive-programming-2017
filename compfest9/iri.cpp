//
// Created by Ki Ageng Satria Pamungkas on 8/12/17.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct coordinate{
    int x,y;
};
vector <coordinate> S;

int main(){
    ios_base::sync_with_stdio(0);
    unsigned long long coor, man, T,N,K;;
    cin >> T ;
    while (T--) {
        cin >> N >> K;
        man = 0;
        for (int i = 0; i < N ; ++i) {
            cin >> coor.x >> coor.y;
            S.push_back(x);
            for (int j = 0; j < i; ++j) {
                man += abs(S[j].x - S[i].x);
                man += abs(S[j].y - S[i].y);
            }
        }
        unsigned long long mnks = K - man;

    }
    return 0;
}