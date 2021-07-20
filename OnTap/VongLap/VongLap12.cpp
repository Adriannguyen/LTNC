#include <bits/stdc++.h>
#define MAX 5
using namespace std;

int main(){
    int tong=0, dem=0;
    int a[MAX];
    for (int i=0; i<MAX; ++i){
        cin >> a[i];
        tong += a[i];
        dem++;
    }

    cout << tong/dem;
}
