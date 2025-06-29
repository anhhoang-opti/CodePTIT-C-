/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
// Sắp xếp theo tổng chữ số tăng dần, nếu tổng bằng nhau thì sắp xếp số bé đứng trước, số lớn đứng sau

int tong(int n) {
    int ket_qua = 0;
    while(n) {
        ket_qua += n % 10;
        n /= 10;
    }
    return ket_qua;
}
bool cmp(int a, int b) {
    if(tong(a) != tong(b)) {
        return tong(a) < tong(b);
}
    else {
        return a < b;
    }
}
    
int main() {
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n, cmp);
    for(int x : a) {
        cout << x << ' ';
    }
    
    return 0;
}

   