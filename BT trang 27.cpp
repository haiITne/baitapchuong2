#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Hàm nhập mảng số nguyên
void nhapMangInt(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }
}

// Hàm xuất mảng số nguyên
void xuatMangInt(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Hàm sắp xếp tăng dần cho số nguyên
void interchangeSortIntAsc(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm sắp xếp giảm dần cho số nguyên
void interchangeSortIntDesc(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm nhập mảng số thực
void nhapMangFloat(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s("%f", &a[i]);
    }
}

// Hàm xuất mảng số thực
void xuatMangFloat(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

// Hàm sắp xếp tăng dần cho số thực
void interchangeSortFloatAsc(float a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm sắp xếp giảm dần cho số thực
void interchangeSortFloatDesc(float a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm nhập mảng ký tự
void nhapMangChar(char a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s(" %c", &a[i]); // Dùng " %c" để bỏ qua ký tự trắng
    }
}

// Hàm xuất mảng ký tự
void xuatMangChar(char a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");
}

// Hàm sắp xếp tăng dần cho ký tự
void interchangeSortCharAsc(char a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm sắp xếp giảm dần cho ký tự
void interchangeSortCharDesc(char a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                char temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// Hàm nhập mảng chuỗi ký tự
void nhapMangString(char a[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s(" %[^\n]", a[i]); // Đọc chuỗi ký tự với khoảng trắng
    }
}

// Hàm xuất mảng chuỗi ký tự
void xuatMangString(char a[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", a[i]);
    }
    printf("\n");
}

// Hàm sắp xếp tăng dần cho chuỗi ký tự
void interchangeSortStringAsc(char a[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(a[i], a[j]) > 0) {
                char temp[100];
                strcpy_s(temp, a[i]);
                strcpy_s(a[i], a[j]);
                strcpy_s(a[j], temp);
            }
        }
    }
}

// Hàm sắp xếp giảm dần cho chuỗi ký tự
void interchangeSortStringDesc(char a[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(a[i], a[j]) < 0) {
                char temp[100];
                strcpy_s(temp, a[i]);
                strcpy_s(a[i], a[j]);
                strcpy_s(a[j], temp);
            }
        }
    }
}

int main() {
    int choice, n;

    // Chọn loại dữ liệu
    printf("Chon loai du lieu:\n1. So nguyen\n2. So thuc\n3. Ky tu\n4. Chuoi ky tu\n");
    scanf_s("%d", &choice);

    switch (choice) {
    case 1: { // Số nguyên
        printf("Nhap so luong phan tu mang: ");
        scanf_s("%d", &n);
        int* a = (int*)malloc(n * sizeof(int));

        nhapMangInt(a, n);

        printf("Mang a sau khi sap xep tang dan: ");
        interchangeSortIntAsc(a, n);
        xuatMangInt(a, n);

        printf("Mang a sau khi sap xep giam dan: ");
        interchangeSortIntDesc(a, n);
        xuatMangInt(a, n);

        free(a);
        break;
    }
    case 2: { // Số thực
        printf("Nhap so luong phan tu mang: ");
        scanf_s("%d", &n);
        float* a = (float*)malloc(n * sizeof(float));

        nhapMangFloat(a, n);

        printf("Mang a sau khi sap xep tang dan: ");
        interchangeSortFloatAsc(a, n);
        xuatMangFloat(a, n);

        printf("Mang a sau khi sap xep giam dan: ");
        interchangeSortFloatDesc(a, n);
        xuatMangFloat(a, n);

        free(a);
        break;
    }
    case 3: { // Ký tự
        printf("Nhap so luong phan tu mang: ");
        scanf_s("%d", &n);
        char* a = (char*)malloc(n * sizeof(char));

        nhapMangChar(a, n);

        printf("Mang a sau khi sap xep tang dan: ");
        interchangeSortCharAsc(a, n);
        xuatMangChar(a, n);

        printf("Mang a sau khi sap xep giam dan: ");
        interchangeSortCharDesc(a, n);
        xuatMangChar(a, n);

        free(a);
        break;
    }
    case 4: { // Chuỗi ký tự
        printf("Nhap so luong chuoi: ");
        scanf_s("%d", &n);
        char(*a)[100] = (char(*)[100])malloc(n * sizeof(*a));

        nhapMangString(a, n);

        printf("Mang chuoi sau khi sap xep tang dan: ");
        interchangeSortStringAsc(a, n);
        xuatMangString(a, n);

        printf("Mang chuoi sau khi sap xep giam dan: ");
        interchangeSortStringDesc(a, n);
        xuatMangString(a, n);

        free(a);
        break;
    }
    default:
        printf("Lua chon khong hop le.\n");
        break;
    }

    return 0;
}
