//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <limits.h>
//#include <stdbool.h>
//
//#define MAX 100
//
//// Ham kiem tra so hoan thien
//bool isPerfectNumber(int num) {
//    if (num <= 0) return false;
//    int sum = 0;
//    for (int i = 1; i <= num / 2; i++) {
//        if (num % i == 0) {
//            sum += i;
//        }
//    }
//    return sum == num;
//}
//
//// Ham kiem tra so nguyen to
//bool isPrime(int num) {
//    if (num <= 1) return false;
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//// 1. Liet ke cac cot co tong nho nhat
//void lietKeCotCoTongNhoNhat(int a[MAX][MAX], int m, int n) {
//    int minSum = INT_MAX;
//    int colSums[MAX] = { 0 };
//
//    for (int j = 0; j < n; j++) {
//        for (int i = 0; i < m; i++) {
//            colSums[j] += a[i][j];
//        }
//        if (colSums[j] < minSum) {
//            minSum = colSums[j];
//        }
//    }
//
//    printf("Cac cot co tong nho nhat: ");
//    for (int j = 0; j < n; j++) {
//        if (colSums[j] == minSum) {
//            printf("%d ", j);
//        }
//    }
//    printf("\n");
//}
//
//// 2. Liet ke cac dong co nhieu so hoan thien nhat
//void lietKeDongCoNhieuSoHoanThienNhat(int a[MAX][MAX], int m, int n) {
//    int maxCount = 0;
//    int rowCounts[MAX] = { 0 };
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if (isPerfectNumber(a[i][j])) {
//                rowCounts[i]++;
//            }
//        }
//        if (rowCounts[i] > maxCount) {
//            maxCount = rowCounts[i];
//        }
//    }
//
//    printf("Cac dong co nhieu so hoan thien nhat: ");
//    for (int i = 0; i < m; i++) {
//        if (rowCounts[i] == maxCount) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//}
//
//// 3. Liet ke chi so cac dong chua toan gia tri chan
//void lietKeDongChuaToanGiaTriChan(int a[MAX][MAX], int m, int n) {
//    printf("Cac dong chua toan gia tri chan: ");
//    for (int i = 0; i < m; i++) {
//        bool allEven = true;
//        for (int j = 0; j < n; j++) {
//            if (a[i][j] % 2 != 0) {
//                allEven = false;
//                break;
//            }
//        }
//        if (!allEven) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//}
//
//// 4. Tim gia tri xuat hien nhieu nhat trong ma tran
//void timGiaTriXuatHienNhieuNhat(int a[MAX][MAX], int m, int n) {
//    int freq[MAX * MAX] = { 0 };
//    int maxFreq = 0, mostFreqValue = a[0][0];
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            int count = 0;
//            for (int x = 0; x < m; x++) {
//                for (int y = 0; y < n; y++) {
//                    if (a[i][j] == a[x][y]) {
//                        count++;
//                    }
//                }
//            }
//            if (count > maxFreq) {
//                maxFreq = count;
//                mostFreqValue = a[i][j];
//            }
//        }
//    }
//
//    printf("Gia tri xuat hien nhieu nhat: %d (xuat hien %d lan)\n", mostFreqValue, maxFreq);
//}
//
//// 5. Tim so nguyen to nho nhat trong ma tran
//void timSoNguyenToNhoNhat(int a[MAX][MAX], int m, int n) {
//    int minPrime = INT_MAX;
//    bool found = false;
//
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            if (isPrime(a[i][j]) && a[i][j] < minPrime) {
//                minPrime = a[i][j];
//                found = true;
//            }
//        }
//    }
//
//    if (found) {
//        printf("So nguyen to nho nhat: %d\n", minPrime);
//    }
//    else {
//        printf("Khong co so nguyen to trong ma tran.\n");
//    }
//}
//
//// 6. Tim phan tu lon (nho) nhat trong dong thu k
//void timPhanTuLonNhatDongK(int a[MAX][MAX], int m, int n, int k) {
//    int maxVal = a[k][0];
//    for (int j = 1; j < n; j++) {
//        if (a[k][j] > maxVal) {
//            maxVal = a[k][j];
//        }
//    }
//    printf("Phan tu lon nhat trong dong %d: %d\n", k, maxVal);
//}
//
//void timPhanTuNhoNhatDongK(int a[MAX][MAX], int m, int n, int k) {
//    int minVal = a[k][0];
//    for (int j = 1; j < n; j++) {
//        if (a[k][j] < minVal) {
//            minVal = a[k][j];
//        }
//    }
//    printf("Phan tu nho nhat trong dong %d: %d\n", k, minVal);
//}
//
//// 7. Tim phan tu lon (nho) nhat trong cot thu k
//void timPhanTuLonNhatCotK(int a[MAX][MAX], int m, int n, int k) {
//    int maxVal = a[0][k];
//    for (int i = 1; i < m; i++) {
//        if (a[i][k] > maxVal) {
//            maxVal = a[i][k];
//        }
//    }
//    printf("Phan tu lon nhat trong cot %d: %d\n", k, maxVal);
//}
//
//void timPhanTuNhoNhatCotK(int a[MAX][MAX], int m, int n, int k) {
//    int minVal = a[0][k];
//    for (int i = 1; i < m; i++) {
//        if (a[i][k] < minVal) {
//            minVal = a[i][k];
//        }
//    }
//    printf("Phan tu nho nhat trong cot %d: %d\n", k, minVal);
//}
//
//int main() {
//    int a[MAX][MAX];
//    int m, n, k;
//
//    printf("Nhap so hang m: ");
//    scanf("%d", &m);
//    printf("Nhap so cot n: ");
//    scanf("%d", &n);
//
//    printf("Nhap cac phan tu cua ma tran:\n");
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    lietKeCotCoTongNhoNhat(a, m, n);
//    lietKeDongCoNhieuSoHoanThienNhat(a, m, n);
//    lietKeDongChuaToanGiaTriChan(a, m, n);
//    timGiaTriXuatHienNhieuNhat(a, m, n);
//    timSoNguyenToNhoNhat(a, m, n);
//
//    printf("Nhap dong k: ");
//    scanf("%d", &k);
//    timPhanTuLonNhatDongK(a, m, n, k);
//    timPhanTuNhoNhatDongK(a, m, n, k);
//
//    printf("Nhap cot k: ");
//    scanf("%d", &k);
//    timPhanTuLonNhatCotK(a, m, n, k);
//    timPhanTuNhoNhatCotK(a, m, n, k);
//
//    return 0;
//}
