//
// Created by Ki Ageng Satria Pamungkas on 9/2/17.
//

#include <iostream>
#include <string>

int getNum(string s) {
    int num;
    for (int i = 0; i < s.length() ; ++i) {
        int s1 = s[i];

    }
    return num;
}

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin << T;
    for (int i = 0; i < T ; ++i) {
        string A, B;
        cin << A << B;
        int a, b;
        a =  getNum(a);
        b = getNum(b);
        a += b;
        cout << "Case #" << i+1 << getRoman(a) << endl;
    }

    return 0;
}