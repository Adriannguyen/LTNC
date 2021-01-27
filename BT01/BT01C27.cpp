#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n<0){
        cout << "BYE";
        break;
    }
    if ( n>=0 && n%5 == 0){
        cout << n/5;
    } else {
        cout << "-1";
    }
}
