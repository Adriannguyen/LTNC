#include <iostream>
using namespace std;

void tangDan(int a[], int y){
    int tg=0;
    for (int i=0; i<y-1; ++i){
        for (int j=i+1; j<y; ++j){
            if(a[i]>a[j]){
                tg=a[j];
                a[j]=a[i];
                a[i]=tg;
            }
        }
    }
}

void in(int a[], int y){
    cout << a[y-1] << endl << a[0] << endl;
    int tongChan=0, demLe=0;
    for (int i=0; i<y; ++i){
        if (a[i]%2==0){
            tongChan += a[i];
        } else {
            demLe++;
        }
    }
    cout << tongChan << endl << demLe << endl;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }

    tangDan(a,n);
    in(a,n);
}
