#include <stdio.h>

int main(void) {
    int n;
    int a[105];                 // N ≤ 100 theo đề

    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min]) min = j;

        int t = a[i]; a[i] = a[min]; a[min] = t;

        printf("Buoc %d: ", i + 1);   // KHÔNG dùng "Bước"
        for (int k = 0; k < n; k++) {
            if (k) printf(" ");       // chỉ 1 khoảng trống giữa các số
            printf("%d", a[k]);
        }
        printf("\n");
    }
    return 0;
}
