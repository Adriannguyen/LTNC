#include<bits/stdc++.h>
using namespace std;

bool kiemTraSoNguyenTo(int a){
    if (a < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= sqrt((float)a); i ++)
		{
			if (a%i==0)
			{
				return false;
			}
		}
	}
	return true;
}

void soNguyenTo(int x){
    for (int i=2; i<=x; ++i){
        if (i==2){
            cout << "2" << " ";
        }
        if (i==3){
            cout << "3" << " ";
        }
        if (i>3){
            if(kiemTraSoNguyenTo(i)==true){
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

bool kiemTraSoHoanHao(int i){
    int dem=0;
    for (int j=1; j<=i/2; j++){
        if (i%j==0){
            dem += j;
        }
    }
    if (dem == i){
            return true;
        } else {
            return false;
    }
}

void soHoanHao(int x){
    for (int i=2; i<=x; i++){
        if (kiemTraSoHoanHao(i)==true){
            cout << i << " ";
        }
    }
    cout << endl;
}

void soChinhPhuong(int x){
    for (int i=2; i<=x; ++i){
        if (i*i <= x){
            cout << i*i << " ";
        }
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    soNguyenTo(n);
    soHoanHao(n);
    soChinhPhuong(n);
}
