//
// Created by Ki Ageng Satria Pamungkas on 9/30/17.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int M, N, x;
        cin >> N >> M;
        vector <int> A;
        vector <int> B;
        vector <int> C;

        for (int i = 0; i < N; ++i) {
            cin >> x;
            A.push_back(x);
        }

        for (int i = 0; i < N; ++i) {
            cin >> x;
            B.push_back(x);
        }

        int cmin = 0;
        int cring = 0;
        int count = 0;
        for (int i = 0; i < M; ++i) {
            cin >> x;
            C.push_back(x);
            if(x< C[cmin] ) cmin = i;
            cring += i+1;
        }

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        vector<int> m(M+1);
        bool tanda;
        fill(m.begin(), m.end(), 0);
        tanda = false;
        for (int i = 0; i < N; ++i) {
            if(!tanda) {
                for (int j = 0; j < N; ++j) {
                    x = A[i]*B[j] + C[((A[i]*B[j]) %M)];
                    if(m[((A[i]*B[j]) %M)] == 0){
                        count += ((A[i]*B[j]) %M)+1;
                        m[((A[i]*B[j]) %M)] = x;
                        if(cring == count){
                            tanda = true;
                            break;
                        }
                    }
                }
            } else {
                break;
            }
        }
        sort(m.begin(),m.end());
        cout << m[0] << endl;
    }
}