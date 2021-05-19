#include <bits/stdc++.h>
using namespace std;

int myRandom(int n){
    srand(time(NULL));
    return rand()% n;
}

int main(){
    int n;
    cin >> n;
    cout << myRandom(n);
    return 0;
}
