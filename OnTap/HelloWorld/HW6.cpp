#include<bits/stdc++.h>
using namespace std;

bool kiemTraSoChinhPhuong(int n) {
    int sqr = sqrt(n);
    return (sqr*sqr == n);
}

int main(){
    int a;
    cin >> a;
    if(kiemTraSoChinhPhuong(a)){
        cout << "YES";
    } else {
        cout << "NO";
    }

}
