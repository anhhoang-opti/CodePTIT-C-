#include <stdio.h>

// hàm nhập mảng
void nhapmang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

// hàm in mảng
void inmang(int a[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// hàm sắp xếp chọn (selection sort)
void sapxepchon(int a[], int n) {
    int i, j, min, temp;
    for(i = 0; i < n-1; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(a[j] < a[min]) min = j;
        }
        // hoán đổi phần tử nhỏ nhất với a[i]
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("Bước %d: ", i+1);
        inmang(a, n);
    }
}

int main() {
    int a[1000], n;
    scanf("%d", &n);

    nhapmang(a, n);
    sapxepchon(a, n);

    return 0;
}
