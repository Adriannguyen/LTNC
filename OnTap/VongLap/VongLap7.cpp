#include<bits/stdc++.h>
using namespace std;

void tangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
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

    int a[n];
    for (int i=0; i<n; ++ i){
        cin >> a[i];
    }

    tangDan(a,n);

    int tong=0;
    int dem[n];
    for (int i=1; i<n; ++i){
        dem[0]=0;
        dem[i] = dem[i-1]+a[i-1];
        tong+=dem[i];
    }

    cout << tong;
}
