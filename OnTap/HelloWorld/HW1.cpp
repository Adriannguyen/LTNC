#include <bits/stdc++.h>
using namespace std;

void kiemTra(int a, int b, int c)
{
    if(a<b+c && b<c+a && c<a+b){
        if (a==b && b==c){
            cout << a+b+c << endl;
            cout << "deu";
        }
        else if (a==b || a==c || b==c){
            cout << a+b+c << endl;
            cout << "can";
        }
        else if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a)){
            cout << a+b+c << endl;
            cout << "vuong";
        }
        else {
            cout << a+b+c << endl;
            cout << "thuong";
        }
    } else {
        cout << "Invalid";
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    kiemTra(a,b,c);
}
