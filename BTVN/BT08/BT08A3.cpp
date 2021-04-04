#include <bits/stdc++.h>
using namespace std;

void doiCho(char** x, char** y)
{
   char *a;
   a = *x;
   *x = *y;
   *y = a;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   doiCho(&s1,&s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}


