#include<bits/stdc++.h>
using namespace std;

void kiemTraDuong(int x1,int v1,int x2,int v2){
    if(((x2-x1)%(v2-v1)==0) && ((x2-x1)/(v2-v1)<0)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}

int main(){
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    kiemTraDuong(x1,v1,x2,v2);
}
