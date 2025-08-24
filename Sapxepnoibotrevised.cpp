#include <bits/stdc++.h>
using namespace std;

void nhapvao(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

void inramang(const int a[], int m) {
    for (int i = 0; i < m; i++) cout << a[i] << ' ';
    cout << '\n';
}

void sapxepnoibot(int a[], int n) {
    int i, j, t, ok;
    for (int i = 0; i < n - 1; i++) {
        ok = 1;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                ok = 0;
            }
        }
     
        if (ok) break;
        cout << "Buoc " << i + 1 << ": ";
        inramang(a, n);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a[100], n;
    if (!(cin >> n)) return 0;
    nhapvao(a, n);
    sapxepnoibot(a, n);
    return 0;
}
