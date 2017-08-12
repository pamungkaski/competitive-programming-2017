//
// Created by Ki Ageng Satria Pamungkas on 7/9/17.
//
#include <iostream>

using namespace std;

int main(){
    long n;
    cin >> n;
    while (n--){
        int x,y,z,x1,y1,x2,y2,j;
        cin >> x >> y >> z >> x1 >> y1 >> x2 >> y2 >> j;
        if(((x>=x1)and(x<=x2))and((y>=y1)and(y<=y2))and(z<=j)){
            cout << "shoot" << endl;
        }else  if(((x<=x1)and(x>=x2))and((y<=y1)and(y>=y2))and(z<=j)){
            cout << "shoot" << endl;
        }else if(((x>=x1)and(x<=x2))and((y<=y1)and(y>=y2))and(z<=j)){
            cout << "shoot" << endl;
        }else if(((x<=x1)and(x>=x2))and((y>=y1)and(y<=y2))and(z<=j)){
            cout << "shoot" << endl;
        }else{
            cout << "hold" << endl;
        }
    }
}