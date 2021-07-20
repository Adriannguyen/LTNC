#include<bits/stdc++.h>
using namespace std;

// hàm chuyển đổi thập phân sang nhị phân
void decToBinary(long int n)
{
    // mảng để lưu trữ số nhị phân
    long int binaryNum[1000];

    // bộ đếm cho mảng nhị phân
    int i = 0;
    while (n > 0) {

        // lưu trữ phần còn lại trong mảng nhị phân
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // in mảng nhị phân theo thứ tự ngược lại
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}

// Chương trình điều khiển để kiểm tra chức năng trên
int main()
{
    long int n;
    cin >> n;
    n=abs(n);
    decToBinary(n);
    return 0;
}
