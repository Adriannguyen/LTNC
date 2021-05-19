#include <bits/stdc++.h>
using namespace std;

void nhapDem(int a[], int n){
    for (int i=0; i<n; ++i){
        a[i] = 0;
        cout << a[i];
    }
}
int main(){
    int n;
    cin >> n;
    int dem[n];
    nhapDem(dem,n);
    /*int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int dem[n];
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            if (a[i]=a[j]){
                dem[i]++;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << dem[i] << endl;
    }
    */
}
