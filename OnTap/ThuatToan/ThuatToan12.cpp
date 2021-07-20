#include <iostream>
using namespace std;

int main(){
    int soLuongMang, soLuongTruyVan;
    cin >> soLuongMang >> soLuongTruyVan;

    int doLonMang;
    int arr[soLuongMang][100];

    for (int i=0; i<soLuongMang; i++){
        cin >> doLonMang;
        for (int j=0; j<doLonMang; j++){
            cin >> arr[i][j];
        }
    }

    int a,b;
    for (int i=0; i<soLuongTruyVan; ++i){
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
}
