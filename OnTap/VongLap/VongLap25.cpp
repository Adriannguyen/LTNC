#include<bits/stdc++.h>
using namespace std;

bool kiemTraSnt(int n){
    if (n<2){
        return false;
    } else {
        for (int i=2; i<= n/2; i++){
            if (n%i == 0){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    if (kiemTraSnt(n)==false) cout << "no";
    else cout << "yes";

}
