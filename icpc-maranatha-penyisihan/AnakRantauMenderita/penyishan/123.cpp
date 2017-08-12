//
// Created by Ki Ageng Satria Pamungkas on 7/9/17.
//
#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        int count = 0;
        int juma2 = 0, juma3 = 0;
        int jumb2 = 0, jumb3 = 0;
        cin >> A >> B;
        // if A greater than B then Swap
        if( A > B) {
            A = A+B;
            B = A-B;
            A = A-B;
        }
        while(((A%2 != 0)and(A%3 != 0))and(A!=B)){
            A++;
            count++;
        }

        while(((B%2 != 0)and(B%3 != 0))and(A!=B)){
            B++;
            count++;
        }
        int dumA = A;
        int dumB = B;
        while (dumA%2==0){
            dumA =  dumA / 2;
            juma2++;
        }
        while (dumA%3==0){
            dumA =  dumA / 3;
            juma3++;
        }
        while (dumB%2==0){
            dumB =  dumB / 2;
            jumb2++;
        }
        while (dumB%3==0){
            dumB =  dumB / 3;
            jumb3++;
        }
        count += 2*abs(juma2-jumb2);
        count += 3*abs(juma3-jumb3);
        cout << A << ' '<< juma2 << ' '<< juma3 <<endl;
        cout << B << ' '<< jumb2 << ' '<< jumb3 <<endl;
        cout << count << endl;
    }
}
