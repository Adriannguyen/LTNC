#include <bits/stdc++.h>
using namespace std;

int gcn(int x, int y){
    if (y==0) return x;
    else return gcn(y,x%y);
}

int main(){
    int a, b;
    cin >> a >> b;

    if (gcn(a,b)) cout << abs(a*b/gcn(a,b));
    else cout << "0";
}
