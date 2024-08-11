#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Đếm số phần tử là số nguyên tố trong mảng
int demSoNguyenTo(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            count++;
        }
    }
    return count;
}

// Hàm kiểm tra từng chữ số của số có phải là số lẻ không
bool tatCaChuSoLe(int n) {
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            return false;
        }
        n /= 10;
    }
    return true;
}

// Xuất các phần tử mà từng chữ số của nó là số lẻ
void xuatChuSoLe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (tatCaChuSoLe(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Tìm vị trí số lớn nhất (cuối cùng)
int timViTriMaxCuoiCung(int a[], int n) {
    int max = a[0];
    int viTri = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] >= max) {
            max = a[i];
            viTri = i;
        }
    }
    return viTri;
}

// Kiểm tra mảng có toàn là số chẵn không
bool mangToanSoChan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

// Kiểm tra mảng có phải là dãy số chẵn lẻ xen kẽ không
bool chanLeXenKe(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 != 0 && a[i + 1] % 2 != 0)) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Nhap so luong phan tu mang a: ");
    scanf_s("%d", &n);

    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong the cap phat bo nho\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }

    printf("So phan tu la so nguyen to trong mang: %d\n", demSoNguyenTo(a, n));

    printf("Cac phan tu ma tung chu so cua no la so le: ");
    xuatChuSoLe(a, n);

    int viTriMax = timViTriMaxCuoiCung(a, n);
    printf("Vi tri cua so lon nhat (cuoi cung) trong mang: %d\n", viTriMax);

    if (mangToanSoChan(a, n)) {
        printf("Mang toan so chan\n");
    }
    else {
        printf("Mang khong toan so chan\n");
    }

    if (chanLeXenKe(a, n)) {
        printf("Mang la day chan le xen ke\n");
    }
    else {
        printf("Mang khong phai la day chan le xen ke\n");
    }

    // Giải phóng bộ nhớ
    free(a);

    return 0;
}
