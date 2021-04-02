#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int sum =0;
    int ar[n];
    for (int i=0; i<n; ++i){
        cin >> ar[i];
        sum += ar[i];
    }
    cout << sum;
}
