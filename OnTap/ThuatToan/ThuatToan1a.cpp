#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5];
    for (int i=0; i<5; i++){
        cin >> a[i];
    }

    int tt=0;
    for (int i=0; i<4; ++i){
        for (int j=i+1; j<5; ++j){
            if(a[i] > a[j]){
                tt = a[i];
                a[i] = a[j];
                a[j] = tt;
            }
        }
    }
    cout << a[0] << endl;

    int tg=0;
    for (int i=0; i<4; ++i){
        for (int j=i+1; j<5; ++j){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    cout << a[0] << endl;

    int tongChan=0;
    int demLe=0;
    for (int i=0; i<5; ++i){
        if (a[i]%2 == 0){
            tongChan += a[i];
        } else {
            demLe ++;
        }
    }
    cout << tongChan << endl << demLe;
}
