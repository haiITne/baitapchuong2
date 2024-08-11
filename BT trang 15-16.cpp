#include <stdio.h>
#include <stdlib.h>

// Hàm nhập mảng
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }
}

// Hàm xuất mảng
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Tìm max của mảng
int timMax(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

// Tìm min của mảng
int timMin(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

// Đếm số phần tử chẵn trong mảng
int demChan(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Đếm số phần tử lẻ trong mảng
int demLe(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

// Tìm kiếm tuyến tính
int timKiemTuyenTinh(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

// So sánh cho qsort
int cmpfunc(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Tìm kiếm nhị phân (mảng phải được sắp xếp trước)
int timKiemNhiPhan(int a[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] == x) {
            return mid;
        }
        else if (a[mid] < x) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

// Đếm số phần tử x trong mảng
int demSoPhanTuX(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}

// Đếm số phần tử lớn hơn x trong mảng
int demSoPhanTuLonHonX(int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            count++;
        }
    }
    return count;
}

// Tính tổng các phần tử trong mảng
int tongMang(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

// Kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Xuất các số nguyên tố trong mảng
void xuatSoNguyenTo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Kiểm tra số hoàn thiện
int laSoHoanThien(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

// Xuất các số hoàn thiện trong mảng
void xuatSoHoanThien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (laSoHoanThien(a[i])) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Xuất các phần tử ở vị trí chẵn trong mảng
void xuatViTriChan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Xuất các phần tử ở vị trí lẻ trong mảng
void xuatViTriLe(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Xuất giá trị max kèm vị trí
void xuatMaxVaViTri(int a[], int n) {
    int max = a[0];
    int viTri = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            viTri = i;
        }
    }
    printf("Max: %d tai vi tri: %d\n", max, viTri);
}

// Xuất giá trị min kèm vị trí
void xuatMinVaViTri(int a[], int n) {
    int min = a[0];
    int viTri = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            viTri = i;
        }
    }
    printf("Min: %d tai vi tri: %d\n", min, viTri);
}

// Hàm ghép hai mảng tăng dần
void ghepMangTangDan(int b[], int m, int c[], int n, int a[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (b[i] < c[j]) {
            a[k++] = b[i++];
        }
        else {
            a[k++] = c[j++];
        }
    }
    while (i < m) {
        a[k++] = b[i++];
    }
    while (j < n) {
        a[k++] = c[j++];
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu mang a: ");
    scanf_s("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));

    nhapMang(a, n);

    printf("Mang a: ");
    xuatMang(a, n);

    printf("Max cua a: %d\n", timMax(a, n));
    printf("Min cua a: %d\n", timMin(a, n));
    printf("So phan tu chan trong a: %d\n", demChan(a, n));
    printf("So phan tu le trong a: %d\n", demLe(a, n));

    int x;
    printf("Nhap x de tim kiem trong mang a: ");
    scanf_s("%d", &x);

    int viTriTuyenTinh = timKiemTuyenTinh(a, n, x);
    if (viTriTuyenTinh != -1) {
        printf("Tim thay x tai vi tri (tuyen tinh): %d\n", viTriTuyenTinh);
    }
    else {
        printf("Khong tim thay x (tuyen tinh)\n");
    }

    // Sắp xếp mảng trước khi tìm kiếm nhị phân
    qsort(a, n, sizeof(int), cmpfunc);

    int viTriNhiPhan = timKiemNhiPhan(a, n, x);
    if (viTriNhiPhan != -1) {
        printf("Tim thay x tai vi tri (nhi phan): %d\n", viTriNhiPhan);
    }
    else {
        printf("Khong tim thay x (nhi phan)\n");
    }

    printf("So phan tu x xuat hien trong a: %d\n", demSoPhanTuX(a, n, x));
    printf("So phan tu lon hon x trong a: %d\n", demSoPhanTuLonHonX(a, n, x));
    printf("Tong cac phan tu trong a: %d\n", tongMang(a, n));

    printf("Cac so nguyen to trong a: ");
    xuatSoNguyenTo(a, n);

    printf("Cac so hoan thien trong a: ");
    xuatSoHoanThien(a, n);

    printf("Cac phan tu o vi tri chan trong a: ");
    xuatViTriChan(a, n);

    printf("Cac phan tu o vi tri le trong a: ");
    xuatViTriLe(a, n);

    xuatMaxVaViTri(a, n);
    xuatMinVaViTri(a, n);

    int m;
    printf("Nhap so luong phan tu mang b: ");
    scanf_s("%d", &m);
    int* b = (int*)malloc(m * sizeof(int));
    nhapMang(b, m);

    int* c = (int*)malloc((m + n) * sizeof(int));
    ghepMangTangDan(a, n, b, m, c);

    printf("Mang sau khi ghep: ");
    xuatMang(c, m + n);

    // Giải phóng bộ nhớ
    free(a);
    free(b);
    free(c);

    return 0;
}
