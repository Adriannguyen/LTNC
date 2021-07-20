#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int dem[10];

    for (int i=0; i<n; ++i){
        cin >> arr[i];
    }

    for (int i=0; i<10; ++i){
        dem[i]=0;
    }

    for (int i=0; i<n; ++i){
        if (arr[i]==0){
            dem[0]++;
        }
        if (arr[i]==1){
            dem[1]++;
        }
        if (arr[i]==2){
            dem[2]++;
        }
        if (arr[i]==3){
            dem[3]++;
        }
        if (arr[i]==4){
            dem[4]++;
        }
        if (arr[i]==5){
            dem[5]++;
        }
        if (arr[i]==6){
            dem[6]++;
        }
        if (arr[i]==7){
            dem[7]++;
        }
        if (arr[i]==8){
            dem[8]++;
        }
        if (arr[i]==9){
            dem[9]++;
        }
    }

    for (int i=0; i<10; ++i){
        cout << i << " : " << dem[i] << endl;
    }
    return 0;
}
