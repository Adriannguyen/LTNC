#include<bits/stdc++.h>
using namespace std;

void nhietC (double n){
    cout << setprecision(2) << fixed << (n-32)*5/9 << " ";
}

void nhietK (double n){
    cout << setprecision(2) << fixed << 273.15+(n-32)*5/9 << "\n";
}

int main(){
    double min, max, step;
    cin >> min >> max >> step;

    for (int i=0; i<=(max-min)/step; i++){
        if (min+i*step <= max){
            cout << setprecision(2) << fixed << min+i*step << " ";
            nhietC(min+i*step);
            nhietK(min+i*step);
        }
    }
}
