//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//#define MAX 100
//
//// Hàm tính tổng các phần tử nằm trên đường chéo chính
//int tongDuongCheoChinh(int matrix[MAX][MAX], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += matrix[i][i];
//    }
//    return sum;
//}
//
//// Hàm tính tổng các phần tử nằm trên đường chéo phụ
//int tongDuongCheoPhu(int matrix[MAX][MAX], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += matrix[i][n - i - 1];
//    }
//    return sum;
//}
//
//// Hàm tính tổng các phần tử nằm phía trên đường chéo chính
//int tongPhiaTrenDuongCheoChinh(int matrix[MAX][MAX], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            sum += matrix[i][j];
//        }
//    }
//    return sum;
//}
//
//// Hàm tính tổng các phần tử nằm phía trên đường chéo phụ
//int tongPhiaTrenDuongCheoPhu(int matrix[MAX][MAX], int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            sum += matrix[i][j];
//        }
//    }
//    return sum;
//}
//
//int main() {
//    int matrix[MAX][MAX];
//    int n;
//
//    printf("Nhap kich thuoc ma tran vuong n: ");
//    scanf("%d", &n);
//
//    printf("Nhap cac phan tu cua ma tran :\n");
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &matrix[i][j]);
//        }
//    }
//
//    printf("Tong cac phan tu tren duong cheo chinh : %d\n", tongDuongCheoChinh(matrix, n));
//    printf("Tổng cac phan tu tren duong cheo phu : %d\n", tongDuongCheoPhu(matrix, n));
//    printf("Tổng cac phan tu phia tren duong cheo chinh : %d\n", tongPhiaTrenDuongCheoChinh(matrix, n));
//    printf("Tổng cac phan tu phia tren duong cheo phu : %d\n", tongPhiaTrenDuongCheoPhu(matrix, n));
//
//    return 0;
//}
