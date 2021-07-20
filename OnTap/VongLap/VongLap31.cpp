#include <bits/stdc++.h>
using namespace std;

void in(int s){
        int soBanDau = s;
        int chuSo = 0;
        int dem = 0;
        while (s>0){
            chuSo = s%10;

            if(chuSo!=0 && soBanDau%chuSo==0){
                dem++;
            }

            s = s/10;
        }
        cout << dem << endl;
}

int main(){
    int n,s;
    cin >> n;

    for (int i=0; i<n; ++i){
        cin >> s;
        in(s);
    }


}

