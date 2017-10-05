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

int main(){
    LL q;
    cin >> q;
    while(q--){
        LL n, k, i = 1;
        cin >> n >> k;
        LL count = 0;
        LL x = (n % 4) == 0 ? n/4 : n/4 + 1 ;
        if(k >= x){
            count  = n - 1;
        } else {
            while (i < n){
                if(((i*(n-i))<=(n*k))&&(i<n)){
                    count++;
                }
                i++;
            }
        }
        cout << count << endl;
    }
}
