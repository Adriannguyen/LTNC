#include <bits/stdc++.h>
using namespace std;

void giamDan(int a[], int n){
    int tg=0;
    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; ++j){
            if (a[i]<a[j]){
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
    cout << n-a[0];
}

int main(){
    int n,s;
    cin >> n;

    int dem[n], a[n];
    for (int i=0; i<n; ++i){
        dem[i]=1;
    }

    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; ++j){
            if (a[i]==a[j]){
                dem[i]++;
            }
        }
    }

    giamDan(dem, n);

}
