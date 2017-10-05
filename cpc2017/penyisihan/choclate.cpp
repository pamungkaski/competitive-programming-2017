//
// Created by Ki Ageng Satria Pamungkas on 10/1/17.
//
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

typedef long long LL;
typedef double DB;

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;
const double eps = 1e-13;

int calculateMex(unordered_set<int> Set)
{
    int Mex = 0;

    while (Set.find(Mex) != Set.end())
        Mex++;

    return (Mex);
}

int calculateGrundy(int n, int Grundy[])
{
    Grundy[0] = 0;

    if (Grundy[n] != -1)
        return (Grundy[n]);

    unordered_set<int> Set; // A Hash Table

    for (int i=1; i<=3; i++)
        Set.insert (calculateGrundy (n-i, Grundy));

    // Store the result
    Grundy[n] = calculateMex (Set);

    return (Grundy[n]);
}

int main(){
    LL T, x;
    cin >> T;
    vector<LL>sq;
    for (int i = 0; i < T; ++i) {
        cin >> x;
        sq.push_back(x);
    }
    int win = 0;
    for (int i = 0; i < T-1; ++i) {
        vector<LL>sq2;
        sq2.push_back(sq[i]);
        for (int j = i+1; j < T; ++j) {
            sq2.push_back(sq[j]);
//            for (int l = 0; l < sq2.size(); ++l) {
//                cout << sq2[l] << " ";
//            }
//            cout << endl;
            int n = sizeof(sq2)/sizeof(sq2[0]);
            int size = sq2.size();
            int maximum = sq2[size-1];
            int Grundy[maximum + 1];
            for (int k = 0; k < maximum + 1; ++k) {
                Grundy[k] = -1;
            }

            for (int i=0; i<=size-1; i++)
                calculateGrundy(sq2[i], Grundy);

            int xorValue = Grundy[sq2[0]];

            for (int i=1; i<=size-1; i++)
                xorValue = xorValue ^ Grundy[sq2[i]];
            if((xorValue != 0)&&(xorValue != n-1)){
//                for (int l = 0; l < sq2.size(); ++l) {
//                    cout << sq2[l] << " ";
//                }
//                cout << "xorvalue" <<xorValue <<endl;
                win ++;
            }
        }
    }
    cout << win << endl;
}