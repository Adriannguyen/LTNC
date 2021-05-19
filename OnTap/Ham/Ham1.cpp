#include<bits/stdc++.h>
using namespace std;

void eq (int n, int* a[10000], int* b[10000]){
    for (int i=0; i<n, ++i){
        if (a[i] != b[i]){
            cout << "false";
        } else {
            cout << "true";
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    for (int i=0; i<n; ++i){
        cin >> b[i];
    }

    eq(n, a[n], b[n]);
}
