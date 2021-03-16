#include <bits/stdc++.h>
using namespace std;

 bool LaNamNhuan(int Nam){
    if (Nam % 4 != 0) return false;
    if (Nam % 100 != 0) return true;
    if (Nam % 400 != 0) return false;
    return true;
}

int SoNgayTrongNam(int Nam){
    if (LaNamNhuan(Nam)){
        return (366);
    } else {
        return (365);
    }
}

int SoNgayTruocNam(int Nam){
    int TongSoNgayTruoc = 0;
        for (int i = 1; i < Nam; i += 1)
            TongSoNgayTruoc += SoNgayTrongNam(i);
    return TongSoNgayTruoc;
}

int SoNgayTrongThang(int Nam, int Thang){
    switch (Thang){
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2:{
            if (LaNamNhuan(Nam)) return 29;
            return 28;
            }
        default: return 31;
    }
}

int SoNgayTruocThang(int Nam, int Thang){
    int SoNgay=0;
    for (int i = 1; i < Thang; i += 1)
        SoNgay += SoNgayTrongThang(Nam, i);
        return SoNgay;
}

int TongSoNgay(int Nam, int Thang, int Ngay){
    return SoNgayTruocNam(Nam) + SoNgayTruocThang(Nam, Thang) + Ngay;
}

string NgayTrongTuan(int Nam, int Thang, int Ngay){
    switch (TongSoNgay(Nam,Thang,Ngay)%7){
        case 0: return "Chu nhat";
        case 1: return "Thu hai";
        case 2: return "Thu ba";
        case 3: return "Thu tu";
        case 4: return "Thu nam";
        case 5: return "Thu sau";
        default: return "Thu bay";
    }
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << NgayTrongTuan(a,b,c);
}
