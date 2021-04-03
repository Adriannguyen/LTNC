#include <bits/stdc++.h>
using namespace std;

int main(){
    string t;
    cin >> t;
    int dem=0;
    for (int i = 0; i< t.size()/2; ++i) {
        if(t[i] != t[t.size()-1-i]) {
            dem++;
        }
    }
    if(dem==0){cout<< "yes";}
    else {cout<< "no";}
}
