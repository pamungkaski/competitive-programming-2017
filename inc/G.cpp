#include <iostream>
#include<algorithm>
#include <vector>
#include <map>
#include <utility>

typedef long long LL;
typedef double DB;

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;
const double eps = 1e-13;

struct valu{
    int Nm = 0;
    vector<pair<int ,int > > list;
};

int main() {
    ios_base::sync_with_stdio(false);
    int N;
    LL max = -1, X;
    cin >> N;

    map<int, valu> mav;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> X;
            mav[X].list.push_back(make_pair(i,j));
            mav[X].Nm++;
            if((X > max)&&(mav[X].Nm > 1)){
                for (int k = 0; k < mav[X].Nm-1; ++k) {
                    if ((mav[X].list[k].first != i)||(mav[X].list[k].second != j)){
                        if((mav[X].list[k].first <= i)&&(mav[X].list[k].second  <= j)){
//                            cout << X << endl;
                            max = X;
                            break;
                        }
                    }
                }
            }
        }
    }

    cout << max << endl;
}
