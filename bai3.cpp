//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define MAX 50
//
//// Cấu trúc phân số
//typedef struct {
//    int tu;
//    int mau;
//} PhanSo;
//
//// Hàm nhập danh sách phân số
//void nhapDanhSachPhanSo(PhanSo ps[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("Nhap phan so thu %d (tu so mau so): ", i + 1);
//        scanf("%d%d", &ps[i].tu, &ps[i].mau);
//    }
//}
//
//// Hàm xuất danh sách phân số
//void xuatDanhSachPhanSo(PhanSo ps[], int n) {
//    for (int i = 0; i < n; i++) {
//        printf("%d/%d ", ps[i].tu, ps[i].mau);
//    }
//    printf("\n");
//}
//
//// Hàm tìm phân số có giá trị lớn nhất
//PhanSo timPhanSoLonNhat(PhanSo ps[], int n) {
//    PhanSo max = ps[0];
//    for (int i = 1; i < n; i++) {
//        if ((float)ps[i].tu / ps[i].mau > (float)max.tu / max.mau) {
//            max = ps[i];
//        }
//    }
//    return max;
//}
//
//// Hàm tìm phân số có giá trị nhỏ nhất
//PhanSo timPhanSoNhoNhat(PhanSo ps[], int n) {
//    PhanSo min = ps[0];
//    for (int i = 1; i < n; i++) {
//        if ((float)ps[i].tu / ps[i].mau < (float)min.tu / min.mau) {
//            min = ps[i];
//        }
//    }
//    return min;
//}
//
//// Hàm tính tổng các phân số
//PhanSo tinhTongPhanSo(PhanSo ps[], int n) {
//    PhanSo tong = { 0, 1 };
//    for (int i = 0; i < n; i++) {
//        tong.tu = tong.tu * ps[i].mau + ps[i].tu * tong.mau;
//        tong.mau = tong.mau * ps[i].mau;
//    }
//    return tong;
//}
//
//// Hàm tính tích các phân số
//PhanSo tinhTichPhanSo(PhanSo ps[], int n) {
//    PhanSo tich = { 1, 1 };
//    for (int i = 0; i < n; i++) {
//        tich.tu *= ps[i].tu;
//        tich.mau *= ps[i].mau;
//    }
//    return tich;
//}
//
//// Hàm xuất nghịch đảo các phân số trong mảng
//void xuatNghichDaoPhanSo(PhanSo ps[], int n) {
//    printf("Danh sach phan so nghich dao: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d/%d ", ps[i].mau, ps[i].tu);
//    }
//    printf("\n");
//}
//
//int main() {
//    PhanSo ps[MAX];
//    int n;
//
//    printf("Nhap so luong phan so n: ");
//    scanf("%d", &n);
//
//    nhapDanhSachPhanSo(ps, n);
//
//    printf("Danh sach phan so: ");
//    xuatDanhSachPhanSo(ps, n);
//
//    PhanSo max = timPhanSoLonNhat(ps, n);
//    printf("Phan so lon nhat: %d/%d\n", max.tu, max.mau);
//
//    PhanSo min = timPhanSoNhoNhat(ps, n);
//    printf("Phan so nho nhat: %d/%d\n", min.tu, min.mau);
//
//    PhanSo tong = tinhTongPhanSo(ps, n);
//    printf("Tong cac phan so: %d/%d\n", tong.tu, tong.mau);
//
//    PhanSo tich = tinhTichPhanSo(ps, n);
//    printf("Tich cac phan so: %d/%d\n", tich.tu, tich.mau);
//
//    xuatNghichDaoPhanSo(ps, n);
//
//    return 0;
//}
