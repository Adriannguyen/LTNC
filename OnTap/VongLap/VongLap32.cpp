#include <bits/stdc++.h>
using namespace std;


int main(){
    float n,s;
    cin >> n;
    float min=10000; float max=-10000;

    for (int i=0; i<n; ++i){
        cin >> s;
        if (s > max){
            max = s;
        }
        if (s < min){
            min = s;
        }
    }

    cout << max << endl << min;
}



