#include<bits/stdc++.h>
using namespace std;

int demUCLN(int x, int y){
    if (y==0) return x;
    else return demUCLN(y,x%y);
}

void inUCLN(int x, int y){
    if(demUCLN(x,y) > 1){
        cout << "NO";
    } else {
        cout << "YES";
    }
}

int main(){
    int a,b;
    cin >> a >> b;

    cout << demUCLN(a,b);
}
