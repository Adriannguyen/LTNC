#include <bits/stdc++.h>
#define MAX 5
using namespace std;

int main(){
    int s;
    double tong=0.00;
    for (int i=0; i<MAX; i++){
        cin >> s;
        tong += s;
    }

    cout << setprecision(2) << fixed << tong/MAX;
}
