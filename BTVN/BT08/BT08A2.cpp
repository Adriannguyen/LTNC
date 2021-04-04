#include <bits/stdc++.h>
using namespace std;

int main( )
{
   char x[4] = "abc";
   for (char *y = x; (*y) != '\0'; y++) {
      cout << (void*) y << " : " << (*y) << endl;
   }
   int a[3] = {10};
   cout << &a[2] - &a[0] << endl;
   double b[3] = {0.0};
   cout << &b[2] - &b[0] << endl;
}

