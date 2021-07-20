#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
	cin >> m >> n;
	int a[m][n];

	int dong = m, cot = n, k = 1, p = 0, i, j;

	while(k <= m*n){
		for(i = p; i < cot; i++) /*Vòng lặp để truy cập hàng đầu tiên của mảng*/
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) /*Vòng lặp để truy cập cột cuối cùng của mảng*/
			a[i][cot-1] = k++;
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--) /*Vòng lặp để truy cập hàng cuối cùng của mảng*/
				a[dong-1][i] = k++;
		}
		if(p!=cot-1){
			for(i = dong-2; i > p; i--) /*Vòng lặp để truy cập cột đầu tiên của mảng*/
				a[i][p] = k++;
		}
		p++;dong --; cot --;
	}

	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
