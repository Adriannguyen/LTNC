#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n==0) return n;
    if (n==1) return n;
    else return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin >> n;
    if (n<0) cout << "Khong thuoc day Fibonacci";
    else
    {
        int d=0;
        while (fibo(d)<n) d++;
        if (fibo(d)-n)
        {
            cout << "Khong thuoc day Fibonacci\n";
            for (int i=0; i<d; i++)
                if (i-2) cout << fibo(i) << ' ';
        }
        else
        {
            cout << "Thuoc day Fibonacci\n";
            for (int i=0; i<=d; i++)
                if (i-2) cout << fibo(i) << ' ';
        }
    }
    return 0;
}
