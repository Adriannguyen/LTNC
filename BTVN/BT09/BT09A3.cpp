#include <iostream>

using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

    /* Con tro c khong duoc khai bao bang bieu thuc new ma duoc khai bao tro toi 1 vung bo nho dong khac,
     trong khi do gia tri toan hang cua toan tu new phai la gia tri con tro thu duoc tu mot bieu thuc new array truoc dp
    -> chuong trình chay khong xac dinh sau khi delete c. */

    return 0;
}


