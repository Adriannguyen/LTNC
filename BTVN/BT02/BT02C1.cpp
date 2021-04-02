#include <bits/stdc++.h>
using namespace std;

bool soNguyenTo(int a){
    int dem = 0;
    for (int i=1; i<=a; ++i){
        if (a%i==0) {
            dem ++;
        }
    }
    if (dem == 2) return true;
        else return false;
}

int main(){
    int x;
    cin >> x;
    if (soNguyenTo(x)){
        cout << "yes";
    } else {
        cout << "no";
    }
}
