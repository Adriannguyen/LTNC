#include <iostream>

using namespace std;

int main()
{
    int* a = new int;
    int* a2 = a;
    *a = 10;
    delete a;
    *a2 = 100;
    cout << *a2 << " " << *a;
    delete a2;
}



