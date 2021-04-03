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
    for (int i=0; i<n; ++i){
        int a,b,j, dem=0;
        cin >> a >> b;
        int arr[b+1];
        for (int j=a; j<=b; ++j){
            if (arr[j] = true){
                dem++;
            }
        }
        cout << dem;
    }
}
