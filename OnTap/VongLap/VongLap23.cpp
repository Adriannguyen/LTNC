#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int min = 100000;
    int a[n];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    for (int i=0; i<n-1; ++i){
        for (int j=i+1; j<n; ++j){
            if (min > abs(a[j]-a[i])){
                min = abs(a[j]-a[i]);
            }
        }
    }

    cout << min;
}
