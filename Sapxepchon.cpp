#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n) {
    for(int i = 0; i < n; i++) cin >> a[i];
}

void inmang(int a[], int n) {
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

void sapxepchon(int a[], int n) {
    int i, j, min, t;
    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(a[j] < a[min]) min = j;
        }
        t = a[i]; a[i] = a[min]; a[min] = t; // hoán đổi vị trí
        cout << "Bước " << i+1 << ": ";
        inmang(a, n);
    }
}

int main() {
    int a[1000], n;
    cin >> n;
    nhapmang(a, n);
    sapxepchon(a, n);
    return 0;
}
