#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    int y[x[n]];
    for (int i=0; i<n; ++i){
        cin >> x[i];
        for (int j=0; j<x[i]; ++j){
            cin >> y[j];
            cout << y[j] << endl;
        }
    }
}
