#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    int tg=0;
    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; ++j){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    cout << a[0] << endl << a[n-1] << endl;

    int tongChan=0;
    int demLe=0;
    for (int i=0; i<n; ++i){
        if (a[i]%2 == 0){
            tongChan += a[i];
        } else {
            demLe ++;
        }
    }
    cout << tongChan << endl << demLe;
}
