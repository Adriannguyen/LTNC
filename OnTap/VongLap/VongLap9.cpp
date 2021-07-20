#include <iostream>
using namespace std;

bool kiemTraSoDoiGuong(int i){
    int soBanDau=i;
    int soDao = 0;
    int chuSo=0;
    while(i>0){
        chuSo = i%10;
        soDao = soDao * 10 + chuSo;
        i = i/10;
    }
    if(soDao==soBanDau){
        return true;
    } else {
        return false;
    }
}

int main(){
    int n;
    cin >> n;

    int dem[n];
    for (int i=0; i<n; ++i){
        dem[i]=0;
    }

    int a, b;
    for (int i=0; i<n; ++i){
        cin >> a >> b;
        for (int j=a; j<=b; ++j){
            if(kiemTraSoDoiGuong(j)==true){
                dem[i]++;
            }
        }
        cout << dem[i] << endl;
    }

}
