#include <bits/stdc++.h>
using namespace std;

bool majority (bool a, bool b, bool c){
    return ((a&&b&&c)||(a&&b&&!c)||(a&&!b&&c)||(!a&&b&&c));
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if (majority(a,b,c)==true){
        cout << "true";
    } else {
        cout << "false";
    }
}
