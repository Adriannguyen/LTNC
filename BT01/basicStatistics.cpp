#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    double tong = 0.0, tb = 0.0;
    for (int i = 0; i < n; ++i){
        cin >> a[i];
        tong += a[i];
        tb = tong / n;
    }
    cout << tb;
}
