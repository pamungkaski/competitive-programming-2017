//
// Created by Ki Ageng Satria Pamungkas on 10/15/17.
//

#include<iostream>
#include<cstdio>
#include<algorithm>
#include <map>
using namespace std;

typedef long long LL;
typedef double DB;

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;
const double eps = 1e-13;

LL arr[100001];
LL c, n;

int f(LL x) {
    LL p = 1;
    LL lastpos = arr[0];
    for(int i = 1;i < n; i++){
        if(arr[i] - lastpos >= x){
            p++;
            if(p == c)
                return 1;
            lastpos = arr[i];
        }
    }
    return 0;
}

int binSearch(){
    LL start = 0, end = arr[n - 1];
    while(start < end){
        LL mid = (start + end) / 2;
        if(f(mid) == 1)
            start = mid + 1;
        else
            end = mid;
    }
    return start - 1;
}

int main() {
    cin >> n >> c;
    map<long long, int> B;
    LL dw = 0, x;
    for(int i = 0; i < n; ++i) {
        cin >> x;
        B[x]++;
        if(B[x] == 1) {
            arr[dw]= x ;
            dw++;
        }
    }
    n = dw;
    sort(arr,arr+n);
    if(n < c){
        cout << 0 << endl;
    }else {
        cout << binSearch() << endl;
    }
}