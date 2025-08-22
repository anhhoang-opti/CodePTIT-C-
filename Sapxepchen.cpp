#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

void inramang(const int a[], int m) {
    for (int i = 0; i < m; i++) cout << a[i] << ' ';
    cout << '\n';
}
void sapxepchen(int a[], int n) {
    if (n <= 0) return;
    cout << "Buoc 0: ";
    inramang(a, 1);            

    for (int i = 1; i < n; i++) {
        int x = a[i];          
        int j = i - 1;         
        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = x;

        cout << "Buoc " << i << ": ";
        inramang(a, i + 1);    
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[100], n;
    cin >> n;
    nhapmang(a, n);
    sapxepchen(a, n);
    return 0;
}
