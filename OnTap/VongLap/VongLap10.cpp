#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n+1][n+1];

    for (int i=0; i<=n; i++){
        for (int j=0; j<=n; j++){
            arr[i][j]=0;
        }
    }

    for (int i =0; i<=n; ++i) {
        for(int j = 0; j <=i; ++j) {
            if (i==0 && j == 0) arr[i][j]=1;
            else if(j == 0 || j == i) arr[i][j]=1;
            else arr[i][j]= arr[i-1][j-1] + arr[i-1][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
