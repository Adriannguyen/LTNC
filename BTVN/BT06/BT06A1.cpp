#include <bits/stdc++.h>
using namespace std;

void funtion(int a[]){
    cout << a << endl << &a[1] << endl;
}

int main(){
    int a[3] = {1,2,3};
    cout << a << endl << &a[1] << endl;
    funtion(a);
}



