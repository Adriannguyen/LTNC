#include<iostream>
using namespace std;

int SoDaoNguoc(int n){
	int SoDao = 0;
	while(n > 0){
		SoDao = SoDao*10 + n%10;
		n = n/10;
	}
	return SoDao;
}

bool KiemTraSoDoiXung(int n){
    if (SoDaoNguoc(n)==n) return true;
    else return false;
}

int main(){
    int n;
    cin >> n;
    int a,b,j, dem=0;
    for (int i=0; i<n; ++i){
        cin >> a >> b;
        for (int j=a; j<=b; ++j){
            if (KiemTraSoDoiXung(j)){
                dem++;
            }
        }
        cout << dem << endl;
    }
}
