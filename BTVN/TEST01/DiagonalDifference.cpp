#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int sum1 =0, sum2 =0, sum=0;

    int a[n][n];
    for (int i=0; i<n; ++i)
    for (int j=0; j<n; ++j){
        cin >> a[i][j];
        if (i == j){
            sum1 += a[i][j];
        }
    }
    for (int i=0; i<n; ++i)
    for (int j=0; j<n; ++j){
        if (j == n-1-i){
            sum2 += a[i][j];
        }
    }
    sum = abs(sum1-sum2);
    cout << sum;
}
