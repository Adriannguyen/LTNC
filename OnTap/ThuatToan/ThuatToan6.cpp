#include <bits/stdc++.h>
using namespace std;

int gcn(int a, int b){
    if (b==0) return a;
    return gcn(b,a%b);
}

// tim so uoc cua ucln day dươi/bcnn day tren
int main(){
    int n, m;
    cin >> n >> m;

    int ucln, bcnn;
    int a, b;
    for (int i=0; i<n; i++){
        cin >> a;
        if (i==0) bcnn = a;
        else {
            bcnn = bcnn * a/ gcn(bcnn, a);
        }
    }

    for (int j=0; j<m; j++){
        cin >> b;
        if (j==0) ucln = b;
        else {
            ucln = gcn(ucln, b);
        }
    }

    int s = ucln/bcnn;

    int dem=0;
    for (int i=1; i<=s; i++){
        if (s%i==0){
            dem++;
        }
    }

    cout << dem;
}
