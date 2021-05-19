#include<bits/stdc++.h>
using namespace std;

bool kiemTraSoChinhPhuong(int n) {
    int sqr = sqrt(n);
    if (sqr*sqr == n){
        return true;
    } else return false;
}

int main(){
    int a;
    cin >> a;
    if(kiemTraSoChinhPhuong(a) == true){
        cout << "YES";
    } else {
        cout << "NO";
    }

}

