#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    int dem=0;
    for (int i=1; i<n+1; ++i){
        if (i%2==0 && i<=p){
            dem ++;
        }
    }
    cout << dem;
}
