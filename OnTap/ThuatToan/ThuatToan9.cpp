#include <bits/stdc++.h>
using namespace std;

int soLanTruoc(int a){
    if (a%2==0){
        return (a/2);
    } else {
        return ((a-1)/2);
    }
}

int soLanSau(int a, int b){
    if (a%2==0){
        return ((b-a)/2);
    } else {
        return ((b+1-a)/2);
    }
}

int main(){
    int n, p;
    cin >> n >> p;

    if (soLanTruoc(p) < soLanSau(p,n)){
        cout << soLanTruoc(p);
    } else {
        cout << soLanSau(p,n);
    }
}
