#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n],b[n];
    for (int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    int dem=0;
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if ((a[i]==a[j]) || (b[i])==b[j] || (a[i]+b[i]==a[j]+b[j]) || (a[i]-b[i]==a[j]-b[j])){
                dem++;
            }
        }
    }

    if (dem == 0){
        cout << "no";
    } else {
        cout << "yes";
    }
}
