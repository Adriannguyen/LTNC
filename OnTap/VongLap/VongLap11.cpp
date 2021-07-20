#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i){
        a[i]=0;
    }

    for (int i=0; i<n; i++)
    {
        cin >> s;
        a[s]++;
    }
    int tong =0;
    for (int i=0; i<10; i++) {
        if (a[i]>0){
            tong++;
            break;
        }
    }
    if (tong==0){
        cout << "No";
    } else {
        cout << "Yes";
    }
}
