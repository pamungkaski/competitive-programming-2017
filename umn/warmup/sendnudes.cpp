//
// Created by Ki Ageng Satria Pamungkas on 9/3/17.
//
#include <iostream>
using namespace std;
struct pend {
    int jum;
};
int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i){
        int M, N, K;
        cin >> M >> N >> K;
        int a, b;
        pend penduduk [M];
        for (int j = 0; j < M; ++j) {
            penduduk[j].jum = N;
        }
        for (int j = 0; j < K; ++j) {
            cin >> a >> b;
            a = a-1;
            penduduk[a].jum = 1;
            for (int k = 0; k < a; ++k) {
                penduduk[k].jum -= N-b;
            }
            for (int k = a+1; k < N; ++k) {
                penduduk[k].jum = N - b;
            }
        }
        long x = 1;
        for (int j = 0; j < M; ++j) {
            cout << penduduk[j].jum << " ";
            x *= penduduk[j].jum;
        }
        cout << endl;
        cout << x % 1000000007 << endl;
    }
    return 0;
}
