#include<bits/stdc++.h>
using namespace std;

void nhietC(double n){
    cout << setprecision(2) << fixed << (n-32)*5/9 << " ";
}

void nhietK(double n){
    cout << setprecision(2) << fixed << (n-32)*5/9+273.15 << "\n";
}

int main(){
    double n;
    cin >> n;

    cout << n << " ";
    nhietC(n);
    nhietK(n);
}
