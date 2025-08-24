#include <stdio.h>

void nhapmangvao(int a[], int n) {
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);   
}

void inmangra(const int a[], int m) {
    for (int i = 0; i < m; i++) printf("%d ", a[i]);  
    printf("\n");
}

void sapxepnoibot(int a[], int n) {
    int i, j, t, ok;
    for (i = 0; i < n - 1; i++) {                    
        ok = 1;
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {                   
                t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
                ok = 0;                              
            }
        }
        if (ok) break;                        
        printf("Buoc %d:  ", i + 1);
        inmangra(a, n);
    }
}

int main(void) {
    int a[100], n;                                  
    if (scanf("%d", &n) != 1) return 0;              
    nhapmangvao(a, n);                               
    sapxepnoibot(a, n);
    return 0;
}
