#include<bits/stdc++.h>
using namespace std;

int rnd(double a){
    if (((int)(a*1000))%10 >= 5)
    {
        return ((float)((int)(a*100+1)))/100;
    }
    else
    {
        return ((float)((int)(a*100)))/100;
    }
}

int main(){
    double x;
    cin >> x;
    cout << rnd(x);
}
