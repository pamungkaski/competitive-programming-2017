#include <iostream>
#include <algorithm>


typedef long long LL;
typedef double DB;

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;
const double eps = 1e-13;

void HitungUsia(int x, int y, int z){
    bool cond = true;
    int tahun, bulan , hari;
    int tigap[] = {1, 3, 5, 7, 8, 10, 12} ;
    int tigas[] = {4, 6, 9, 11};
    if ((y == 2)&&(x <= 0)&&(x > 28)){
        cond = false;
        cout << " a" << endl;
    }else if((find(tigap, tigap+7, y) != tigap+7)&&(x <= 0)&&(x > 31)) {
        cond = false;
        cout << " a" << endl;
    }else if((find(tigas, tigas+4, y) != tigap+4)&&(x <= 0)&&(x > 30)) {
        cond = false;
        cout << " a" << endl;mo
    }
    if(cond){
        tahun = 2017 == z ? 0 : 2017 - z -1;
        bulan = 2017 == z ? (10 == y ? 0 : 10 - y -1) : 10 + (12 - y - 1);
        hari = 5;
        if((find(tigap, tigap+7, y) != tigap+7)){
            hari += 2017 == z ? (10 == y ? - x : 31 - x) : (31 - x) ;
        } else if((find(tigas, tigas+4, y) != tigas+4)) {
            hari += 2017 == z ? (10 == y ? - x : 30 - x) : (30 - x) ;
        } else {
            hari += 2017 == z ? (10 == y ? - x : 28 - x) : (28 - x) ;
        }
        if(hari >= (find(tigap, tigap+7, y) != tigap+7 ? 31 : ((find(tigas, tigas+4, y) != tigas+4)? 30 : 28) )){
            bulan++;
            hari  -= (find(tigap, tigap+7, y) != tigap+7 ? 31 : ((find(tigas, tigas+4, y) != tigas+4)? 30 : 28) );
        }
        if(bulan == 12) {
            bulan  = 0;
            tahun ++;
        }
    }
    cout << tahun << " tahun " << bulan << " bulan " << hari << " hari" << endl;
}

int main(){
    int x, y ,z;
    cin >> x >> y >> z;
    HitungUsia(x, y, z);
}
