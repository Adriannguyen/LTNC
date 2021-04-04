#include <iostream>

using namespace std;

int main()
{
    int *a;
    {
        int x = 10, y = 20;
        int *t = new int;
        *t = x + y;
        a = t;
        delete t;
    }
    cout << a << " " << *a;

    return 0;
}



