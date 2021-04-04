#include <bits/stdc++.h>
using namespace std;

void f(string x, int l, int r){
    if (l == r)
        cout<<x<<endl;
    else{
        for (int i = l; i <= r; i++){
            swap(x[l], x[i]);
            f(x, l+1, r);
            swap(x[l], x[i]);
        }
    }
}

int main()
{
    string str = "abca";
    int n = str.size();
    f(str, 0, n-1);
    return 0;
}

