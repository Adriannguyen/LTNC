#include <bits/stdc++.h>
using namespace std;

void veHinh(int a, int b) {
    for (int i = 0; i < a; ++i) cout << ' ';
    for (int i = 0; i < b; ++i) cout << '*';
    cout << endl;
}

int main() {
    int x;
    cin >> x;
    for (int i = 1; i <= x; ++i)
        veHinh(x-i, 2*i-1);
    return 0;
}
