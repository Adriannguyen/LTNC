#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n;++i){
        cin >> a[i];
    }

    int dem = 0, dem1 = 0;
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n; j++){
            if( abs(a[i]-a[j]) <= 1){
                dem ++;
            }
        }
        //if (dem == 4) {dem1++;}
    }

    cout << dem;
}
