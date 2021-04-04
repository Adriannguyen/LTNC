#include <bits/stdc++.h>
using namespace std;

int** generateMap(int** mineMap, int m, int n, int k)
{
    mineMap = new int*[m];
    for(int i=0; i<n; i++) {
        mineMap[i] = new int[n];
    }
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++) mineMap[i][j] = 0;
    while(k){
        int x, y;
        do {
            x = rand() % m;
            y = rand() % n;
        }
        while(mineMap[x][y] == 1);
        mineMap[x][y] = 1;
        k--;
    }
    return mineMap;
}

void printMineMap(int** mineMap, int m, int n)
{
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout << mineMap[i][j] << " ";
        cout << "\n";
    }
}

bool guess(int** mineMap, int m, int n, int  x, int y)
{
    bool Continue = true;
    if(mineMap[x-1][y-1] == 0) {
        int count = 0;
        for(int i=x-2 ;i<x+1; i++) {
            for(int j=y-2; j<y+1; j++) {
                if(mineMap[i][j] == 1) count++;
            }
        }
        mineMap[x-1][y-1] = count;
    }
    else Continue = false;
    return Continue;
}

int main()
{
    int** myMineMap;
    int M, N, K;
    cin >> M >> N >> K;
    myMineMap = generateMap(myMineMap, M, N, K);
    bool lost = false;
    while(!lost)
    {
        printMineMap(myMineMap, M, N);
        int x, y;
        cin >> x >> y;
        lost = guess(myMineMap, M, N, x, y);
    }
    return 0;
}
