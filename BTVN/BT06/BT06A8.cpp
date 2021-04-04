#include <bits/stdc++.h>
using namespace std;

int n;
bool a[100];

void show() {
    for(int i = 1; i<=n;++i){
        if(a[i])
            cout << i;
    }
    cout << endl;
}

void recurse(int u){
    if (u == n+1){
        show();
        return;
    }
    a[u] = 0;
    recurse(u + 1);
    a[u] = 1;
    recurse(u + 1);
}

int main(){
    cin >> n;
    recurse(1);
}

