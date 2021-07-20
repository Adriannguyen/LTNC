#include <bits/stdc++.h>
#define MAX 6
using namespace std;

int main(){
    double a[MAX], tong=0.00, tb=0.00, tongPS=0.00, ps=0.00;
    for (int i=0; i<MAX; ++i){
        cin >> a[i];
        tong = tong+a[i];
    }
    tb=tong/MAX;
    cout << setprecision(1) << fixed << tb << endl;

    for (int i=0; i<MAX; ++i){
        tongPS = tongPS + (a[i]-tb)*(a[i]-tb);
    }
    ps=tongPS/MAX;
    cout << setprecision(2) << fixed << ps << endl;
}
