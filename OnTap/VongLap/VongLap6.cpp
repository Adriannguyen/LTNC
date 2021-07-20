#include<bits/stdc++.h>
using namespace std;

void diemToan(){
     cout << "Theo diem mon Toan:" << endl;
     cout << "SV Toan Ly Anh" << endl;


}

void diemAnh(){
     cout << "Theo diem mon Anh:" << endl;
     cout << "SV Toan Ly Anh" << endl;


}

void diemTB(){
     cout << "Theo diem mon trung binh:" << endl;
     cout << "SV TB Toan Ly Anh" << endl;


}

int main(){
    int n;
    cin >> n;

    float arr[n+1][n+1];
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            cin >> arr[i][j];
        }
    }

    diemToan();
    diemAnh();
    demTB();

    return 0;
}
