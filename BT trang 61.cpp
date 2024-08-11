#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Hàm kiểm tra mảng có chứa toàn bộ số nguyên tố
bool isAllPrime(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (!isPrime(a[i])) {
            return false;
        }
    }
    return true;
}

// Hàm kiểm tra mảng có đối xứng không
bool isSymmetric(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm kiểm tra mảng có tăng dần không
bool isIncreasing(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm kiểm tra mảng có giảm dần không
bool isDecreasing(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm kiểm tra mảng không tăng không giảm
bool isNotIncreasingNorDecreasing(int a[], int n) {
    return !isIncreasing(a, n) && !isDecreasing(a, n);
}

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu mang: ");
    scanf_s("%d", &n);

    // Cấp phát bộ nhớ cho mảng
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    // Nhập mảng
    printf("Nhap cac phan tu mang:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }

    // Kiểm tra mảng có chứa toàn bộ số nguyên tố không
    if (isAllPrime(a, n)) {
        printf("Mang chua toan bo so nguyen to.\n");
    }
    else {
        printf("Mang khong chua toan bo so nguyen to.\n");
    }

    // Kiểm tra mảng có đối xứng không
    if (isSymmetric(a, n)) {
        printf("Mang la doi xung.\n");
    }
    else {
        printf("Mang khong la doi xung.\n");
    }

    // Kiểm tra mảng có tăng dần, giảm dần, hoặc không tăng không giảm
    if (isIncreasing(a, n)) {
        printf("Mang tang dan.\n");
    }
    else if (isDecreasing(a, n)) {
        printf("Mang giam dan.\n");
    }
    else {
        printf("Mang khong tang khong giam.\n");
    }

    // Giải phóng bộ nhớ
    free(a);

    return 0;
}
