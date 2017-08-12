//
// Created by Ki Ageng Satria Pamungkas on 7/9/17.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct player{
    int pts[5];
};
vector <player> tA;
vector <player> tB;
int main(){
    int t;
    cin >> t;
    while (t--){
        tA.clear();
        tB.clear();
        player dm;
        int timA[5];
        int timB[5];
        int max,ply,pos;
        string a,b;
        cin >> a;
        for (int i = 0; i < 5; ++i) {
            cin >> dm.pts[0]>> dm.pts[1] >> dm.pts[2] >> dm.pts[3];
            dm.pts[4] = dm.pts[3];
            tA.push_back(dm);
        }
        cin >> b;
        for (int i = 0; i < 5; ++i) {
            cin >> dm.pts[0]>> dm.pts[1] >> dm.pts[2] >> dm.pts[3];
            dm.pts[4] = dm.pts[3];
            tB.push_back(dm);
        }
        for (int j = 0; j <5 ; ++j) {
            max = 0;
            ply = 0;
            pos = 0;
            for (int i = 0; i < 5 ; ++i) {
                for (int k = 0; k < 5; ++k) {
                    if(max < tA[i].pts[k]){
                        max = tA[i].pts[k];
                        ply = i;
                        pos = k;
                    }
                }
            }
            //cout << ply  << ' ';
            timA[pos] = tA[ply].pts[pos];
            //tpA[pos] = ply;
            for (int i = 0; i <5 ; ++i) {
                tA[ply].pts[i] = -1;
            }
            for (int i = 0; i < 5 ; ++i) {
                tA[i].pts[pos] = -1;
            }
        }
        //cout << endl;
        for (int j = 0; j <5 ; ++j) {
            max = 0;
            ply = 0;
            pos = 0;
            for (int i = 0; i < 5 ; ++i) {
                for (int k = 0; k < 5; ++k) {
                    if(max < tB[i].pts[k]){
                        max = tB[i].pts[k];
                        ply = i;
                        pos = k;
                    }
                }
            }
            for (int i = 0; i < 5 ; ++i) {
                for (int k = 0; k < 5 ; ++k) {
                    cout
                }
            }
            //cout << pos  << " = " << ply <<" ";
            timB[pos] = tB[ply].pts[pos];
            //tpB[pos] = ply;
            for (int i = 0; i <5 ; ++i) {
                tB[ply].pts[i] = -1;
            }
            for (int i = 0; i < 5 ; ++i) {
                tB[i].pts[pos] = -1;
            }
        }
        //cout << endl;
        int sm1 = 0,sm2 = 0;
        for (int i = 0; i <5 ; ++i) {
            sm1+= timA[i];
            sm2+= timB[i];
        }
        //cout << sm1 << ' ' << sm2 << endl;
        if(sm1>sm2){
            cout << a << endl;
        }else if (sm2>sm1){
            cout << b << endl;
        }else{
            cout << "50-50" << endl;
        }
        tA.clear();
        tB.clear();
    }
}