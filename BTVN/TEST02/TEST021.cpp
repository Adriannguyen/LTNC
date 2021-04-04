#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int x1=0, x2=8;
	int x[n];
	char y[n];
	for(int i=2; i<n; ++i) {
		for(int j=i-2; j<=i; ++j) {
            cout << &x[j] << ' ' << endl;
			cout << static_cast<const void *> (&y[j]) << ' ' << endl;
		}
	}
	cout << &x1 << " " << &x2;
	return 0;
}
