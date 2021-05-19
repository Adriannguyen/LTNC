#include<bits/stdc++.h>
using namespace std;

void giaiPT(float a, float b, float c){
    float x1, x2;
    if (a!=0){
        float delta = b*b - 4*a*c;
        if(delta==0){
            x1 = x2 = -b/(2*a);
            cout << setprecision (2) << fixed << x2 << endl;
        }
        else if (delta>0){
            delta = sqrt(delta);
            x1 = (-b + delta) / (2*a);
            x2 = (-b - delta) / (2*a);
            if (x1 > x2){
                cout << setprecision (2) << fixed << x2 << endl;
                cout << setprecision (2) << fixed << x1 << endl;
            } else {
                cout << setprecision (2) << fixed << x1 << endl;
                cout << setprecision (2) << fixed << x2 << endl;
            }
        }
        else {
            delta = sqrt(abs(delta));
            cout << setprecision (2) << fixed << -b/(2*a) <<" "<< setprecision (2) << fixed << -delta/(2*a) << endl;
            cout << setprecision (2) << fixed << -b/(2*a) <<" "<< setprecision (2) << fixed << delta/(2*a) << endl;
        }
    }
}
int main(){
    float a, b, c;
    cin >> a >> b >> c;
    giaiPT(a,b,c);
}
