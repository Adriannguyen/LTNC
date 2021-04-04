#include <bits/stdc++.h>
using namespace std;

bool soNguyenTo(int n)
{
    if(n == 0 || n == 1) return false;
    for(int i=2; i<= sqrt(n); i++)
        if(n%i == 0) return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1; i<n; i++)
    {
        if (soNguyenTo(i)) cout << i << " ";
    }
    return 0;
}
