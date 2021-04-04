#include <bits/stdc++.h>
using namespace std;

int timUCLN(int x, int y)
{
    while(x != y && x>0 && y>0)
    {
        if(x>y) x -= y;
        else y -= x;
    }
    return x;
}

int main()
{
    int  a, b;
    cin >> a >> b;
    int UCLN = timUCLN(a,b);
    cout << UCLN;
    return 0;
}
