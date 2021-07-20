#include<bits/stdc++.h>
using namespace std;

int gcn(int x, int y){
    if (y==0) return x;
    else return gcn(y,x%y);
}

void inPhanSo(int a, int b){
    int ucln = gcn(a,b);
    int tu = a/ucln;
    int mau = b/ucln;

    if (mau==1){
        cout << tu;
    }
    else if (mau<0){
        tu = -tu;
        mau = -mau;
        cout << tu << "/" << mau;
    }
    else {
        cout << tu << "/" << mau;
    }
}

int main(){
    int tu, mau;
    cin >> tu >> mau;

    inPhanSo(tu,mau);
}
