#include<bits/stdc++.h>
using namespace std;

void tangDan(int dem[], int n){
    int tg=0;
    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; ++j){
            if (dem[i]> dem[j]){
                tg=dem[j];
                dem[j]=dem[i];
                dem[i]=tg;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    int dem[5];
    int ln = dem[n];
    for (int j=1; j<6; ++j){
        for (int i=0; i<n; ++i){
            if (j==a[i]){
                dem[j]++;
            }
        }
    }

    tangDan(dem,5);
    cout << dem[0];
}
