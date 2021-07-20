#include<bits/stdc++.h>
using namespace std;

void tongChuSo(int n){
    int chuSo = 0, tong = 0;
    while (n>0){
        chuSo = n%10;
        n=n/10;
        tong += chuSo;
    }
    cout << tong;
}

int main(){
    int n;
    cin >> n;

    tongChuSo(n);
}
