#include <bits/stdc++.h>
using namespace std;

bool duDoan(int** banDoCuaToi, int m, int n, int  x, int y){
    bool tiepTuc = true;
    if(banDoCuaToi[x-1][y-1] == 0) {
        int count = 0;
        for(int i=x-2 ;i<x+1; i++) {
            for(int j=y-2; j<y+1; j++) {
                if(banDoCuaToi[i][j] == 1) count++;
            }
        }
        banDoCuaToi[x-1][y-1] = count;
    }
    else tiepTuc = false;
    return tiepTuc;
}

void inBanDoCuaNguoiChoi(int** banDoCuaToi, int m, int n){
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << banDoCuaToi[i][j] << " ";
        cout << "\n";
    }
}

int** taoBanDo(int** banDoCuaToi, int a, int b, int c){
    banDoCuaToi = new int*[a];
    for(int i=0; i<b; i++) {
        banDoCuaToi[i] = new int[b];
    }
    for(int i=0; i<a; i++)
        for(int j=0; j<b; j++) banDoCuaToi[i][j] = 0;
    while(c){
        int x, y;
        do {
            x = rand() % a;
            y = rand() % b;
        }
        while(banDoCuaToi[x][y] == 1);
        banDoCuaToi[x][y] = 1;
        c--;
    }
    return banDoCuaToi;
}

int main(){
    int** banDoNguoiChoi;
    int M, N, O;
    cin >> M >> N >> O;
    banDoNguoiChoi = taoBanDo(banDoNguoiChoi, M, N, O);
    bool thua = false;
    while(!thua){
        inBanDoCuaNguoiChoi(banDoNguoiChoi, M, N);
        int x, y;
        cin >> x >> y;
        thua = duDoan(banDoNguoiChoi, M, N, x, y);
    }
}
