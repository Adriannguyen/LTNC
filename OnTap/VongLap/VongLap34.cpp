#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    float a[n], b[n], tongHeSo=0, tongDiem=0;
    for (int i=0; i<n; ++i){
        cin >> a[i] >> b[i];
        if (a[i]<0 || a[i]>10){
            cout << "Sai diem so";
            tongDiem = 0;
            tongHeSo = 0;
            break;
        }
        else if (!(b[i]==1 || b[i]==1.5 || b[i]==2.0 || b[i]==2.5 || b[i]==3.0)){
            cout << "Sai he so";
            tongDiem = 0;
            tongHeSo = 0;
            break;
        } else {
            tongHeSo += b[i];
            tongDiem += a[i]*b[i];
        }
    }

    if (tongDiem != 0 && tongHeSo != 0){
        cout << "Tong so mon hoc can tinh DTB: " << n << endl;
        for (int i=0; i<n; ++i){
            cout << "Diem mon hoc " << i << ": " << setprecision(1) << fixed << a[i] << endl;
            cout << "He so mon hoc " << i << ": " << setprecision(1) << fixed << b[i] << endl;
        }
        cout << "Tong so he so: " << setprecision(1) << fixed << tongHeSo << endl;
        cout << "Diem trung binh cua " << n << " mon hoc: " << setprecision(1) << fixed << tongDiem/tongHeSo << endl;
    }

}
