#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; ++i) {
        cin >> arr[i];
    }
    for(int i = 0; i< n; ++i) {
        for(int j = i+1; j< n; ++j) {
            if(arr[i] == arr[j]) {dem++;}
        }
    }
    if (dem != 0){cout<<"yes";}
    else {cout<<"no";}
}

