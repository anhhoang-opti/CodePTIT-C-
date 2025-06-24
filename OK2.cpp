/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Đề bài: Nhập vào n số nguyên và lưu vào một vector<int>. Tính tổng các phần tử.
//Khai báo n phần tử và nhập n phần tử vào
    int n;
    cin >> n;
//Khai báo vector chứa n phần tử
    vector<int> v(n);
//Chạy vòng lặp đi qua n phần tử
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int sum = 0;
    for(int x : v) {
        sum += x;
    } 
    cout << "Tong = " << sum << endl;

    return 0;
}