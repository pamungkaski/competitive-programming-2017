//
// Created by Ki Ageng Satria Pamungkas on 9/12/17.
//
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--) {
        map <string, bool> name;
        int N, K, People = 0;
        cin >> N;
        string s;
        for (int i = 0; i < N; ++i) {
            cin >> s;
            if(s == "selfie") {
                cin >> K;
                for (int j = 0; j < K; ++j) {
                    cin >> s;
                    if(!name[s]){
                        name[s] = true;
                        People++;
                    }
                }
            } else if(s == "dibantu") {
                cin >> K;
                int dmy = People;
                int count = 0;
                for (int j = 0; j < K; ++j) {
                    cin >> s;
                    if(!name[s]){
                        name[s] = true;
                        People++;
                        count++;
                    }
                }
                if((K-count) == dmy){
                    People++;
                }
            }
        }
        cout << People << endl;
    }

    return 0;
}