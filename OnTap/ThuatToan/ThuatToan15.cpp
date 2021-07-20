#include<bits/stdc++.h>
using namespace std;

void tangDan(int a[], int n){
    int tg=0;
    for (int i=0; i<=n-1; i++){
        for (int j=i+1; j<=n; j++){
            if (a[i] > a[j]){
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

    int a[n], b[n+1];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    for (int i=0; i<=n; ++i){
        cin >> b[i];
    }

    tangDan(a,n);
    tangDan(b,n);

    for (int i=0; i<=n; ++i){
        if (a[i]!=b[i]){
            cout << b[i];
            break;
            return 0;
        }
    }
}

