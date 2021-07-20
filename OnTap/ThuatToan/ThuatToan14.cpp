#include<bits/stdc++.h>
using namespace std;

bool checkSNT(int x){
    if (x<2){
        return false;
    } else {
        for (int i=2; i<=sqrt(x); i++){
            if (x%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    for (int i=1; i<=n; ++i){
        if (checkSNT(i)== true){
            cout << i << " ";
        }
    }
}
