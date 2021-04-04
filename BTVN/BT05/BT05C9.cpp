#include <bits/stdc++.h>
using namespace std;

int soNgauNhien(int n){
    srand(time(0));
    return rand()% n;
}

int main(){
    int n;
    cin >> n;
    cout << soNgauNhien(n);
    return 0;
}
