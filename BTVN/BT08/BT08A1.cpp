#include <bits/stdc++.h>
using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x;
}
void g(int yval)
{
   int y;
   cout << &y;
}
int main()
{
   f(7);
   g(11);
   return 0;
}

