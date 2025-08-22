#include <stdio.h>

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
}


void inraphantudau(const int a[], int m) {
    for (int i = 0; i < m; i++) printf("%d ", a[i]);
    printf("\n");
}


void sapxepchen(int a[], int n) {
    if (n <= 0) return;

    printf("Buoc 0: ");
    inraphantudau(a, 1);    

    for (int i = 1; i < n; i++) {
        int x = a[i];       
        int j = i - 1;      

        while (j >= 0 && a[j] > x) {
            a[j + 1] = a[j];
            j--;
        }
       
        a[j + 1] = x;

        printf("Buoc %d: ", i);
        inraphantudau(a, i + 1);  
    }
}

int main() {
    int a[100], n;
    if (scanf("%d", &n) != 1) return 0;
    nhapmang(a, n);
    sapxepchen(a, n);
    return 0;
}
