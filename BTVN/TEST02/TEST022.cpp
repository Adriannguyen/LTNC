#include <bits/stdc++.h>
using namespace std;

const long long int a=20;

long long int factorial(long long int a) {
	cout << "a= " << a << " at " << &a << endl;
    if(a>1) {
    	return factorial(a-1)*a;
	}
    else {
    	return 1;
	}
}
int main() {
    long long int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
