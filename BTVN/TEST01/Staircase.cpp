#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int x=n; x>=1; --x){
        for (int y=1; y<=n; ++y){
            if (y<x){
                cout << " ";
            } else {
                cout << "#";
            }
        }
    cout << "\n";
    }
}
