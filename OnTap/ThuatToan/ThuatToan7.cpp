#include <bits/stdc++.h>
using namespace std;

void check(double a[], double  b[], int n){
    int dem = 0;
    for (int i=0; i<n; ++i){
        if (a[i]<b[i]){
            dem ++;
        }
    }

    if (dem != 0){
        cout << "No";
    } else cout << "Yes";
}

void giamDan (double a[], double n){
    double tg=0.00;
    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; j++){
            if (a[i]>a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    double a[n], b[n];
    for (int i=0; i<n; ++i){
        cin >> a[i] >> b[i];
    }

    giamDan(a, n);
    giamDan(b, n);

    check (a, b, n);
}
