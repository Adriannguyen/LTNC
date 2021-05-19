#include <bits/stdc++.h>
using namespace std;

bool kiemTraSoNguyenTo(int x){
	if (x < 2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i <= sqrt((float)x); i ++)
		{
			if (x%i==0)
			{
				return false;
			}
		}
	}
	return true;
}

void inSoNguyenTo(int n){
    for (int i=2; i<=n; ++i){
        if (i==2) {
            cout << i << endl;
        } else if (i==3){
            cout << i << endl;
        } else {
            if(kiemTraSoNguyenTo(i)==true){
                cout << i << endl;
            }
        }
    }
}

int main(){
    int n;
    cin >> n;
    inSoNguyenTo(n);
}
