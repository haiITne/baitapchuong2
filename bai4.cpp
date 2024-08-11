//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX 50
//
//typedef struct {
//    int stt;
//    char maSoSV[15];
//    char hoTen[50];
//    float diemTieuLuan;
//    float diemThi;
//    float diemTongKet;
//} SinhVien;
//
//void nhapDanhSachSinhVien(SinhVien sv[], int* n, const char* filename);
//void xuatDanhSachSinhVien(SinhVien sv[], int n, const char* filename);
//void tinhDiemTongKet(SinhVien sv[], int n);
//void inSinhVienCaoNhatThapNhat(SinhVien sv[], int n);
//void kiemTraDiemDatKhongDat(SinhVien sv[], int n);
//float quyDoiDiem(float diem);
//void sapXepDanhSachSinhVien(SinhVien sv[], int n, int tang);
//float tinhDiemTrungBinh(SinhVien sv[], int n);
//
//int main() {
//    SinhVien sv[MAX];
//    int n;
//    char filename[] = "sinhvien.txt";
//
//    // Nhập dữ liệu từ file
//    nhapDanhSachSinhVien(sv, &n, filename);
//
//    // Tính điểm tổng kết cho sinh viên
//    tinhDiemTongKet(sv, n);
//
//    // Xuất danh sách sinh viên ra file
//    xuatDanhSachSinhVien(sv, n, filename);
//
//    // In sinh viên có điểm cao nhất và thấp nhất
//    inSinhVienCaoNhatThapNhat(sv, n);
//
//    // Kiểm tra số lượng sinh viên đạt và không đạt
//    kiemTraDiemDatKhongDat(sv, n);
//
//    // Sắp xếp danh sách sinh viên theo điểm tổng kết tăng dần
//    sapXepDanhSachSinhVien(sv, n, 1);
//    printf("\nDanh sach sinh vien sau khi sap xep tang dan theo diem tong ket:\n");
//    xuatDanhSachSinhVien(sv, n, filename);
//
//    // Sắp xếp danh sách sinh viên theo điểm tổng kết giảm dần
//    sapXepDanhSachSinhVien(sv, n, 0);
//    printf("\nDanh sach sinh vien sau khi sap xep giam dan theo diem tong ket:\n");
//    xuatDanhSachSinhVien(sv, n, filename);
//
//    // Tính điểm trung bình của tất cả sinh viên
//    float diemTrungBinh = tinhDiemTrungBinh(sv, n);
//    printf("\nDiem trung binh cua tat ca sinh vien: %.2f\n", diemTrungBinh);
//
//    return 0;
//}
//
//void nhapDanhSachSinhVien(SinhVien sv[], int* n, const char* filename) {
//    FILE* file = fopen(filename, "r");
//    if (file == NULL) {
//        printf("Khong the mo file %s\n", filename);
//        exit(1);
//    }
//    fscanf(file, "%d", n);
//    for (int i = 0; i < *n; i++) {
//        fscanf(file, "%d %s %[^\n] %f %f", &sv[i].stt, sv[i].maSoSV, sv[i].hoTen, &sv[i].diemTieuLuan, &sv[i].diemThi);
//    }
//    fclose(file);
//}
//
//void xuatDanhSachSinhVien(SinhVien sv[], int n, const char* filename) {
//    FILE* file = fopen(filename, "w");
//    if (file == NULL) {
//        printf("Khong the mo file %s\n", filename);
//        exit(1);
//    }
//    fprintf(file, "%d\n", n);
//    fprintf(file, "%-5s %-15s %-30s %-10s %-10s %-10s\n", "STT", "MaSoSV", "HoTen", "TieuLuan", "Thi", "TongKet");
//    for (int i = 0; i < n; i++) {
//        fprintf(file, "%-5d %-15s %-30s %-10.2f %-10.2f %-10.2f\n", sv[i].stt, sv[i].maSoSV, sv[i].hoTen, sv[i].diemTieuLuan, sv[i].diemThi, sv[i].diemTongKet);
//    }
//    fclose(file);
//}
//
//void tinhDiemTongKet(SinhVien sv[], int n) {
//    for (int i = 0; i < n; i++) {
//        sv[i].diemTongKet = sv[i].diemTieuLuan * 0.3 + sv[i].diemThi * 0.7;
//    }
//}
//
//void inSinhVienCaoNhatThapNhat(SinhVien sv[], int n) {
//    int maxIndex = 0, minIndex = 0;
//    for (int i = 1; i < n; i++) {
//        if (sv[i].diemTongKet > sv[maxIndex].diemTongKet) {
//            maxIndex = i;
//        }
//        if (sv[i].diemTongKet < sv[minIndex].diemTongKet) {
//            minIndex = i;
//        }
//    }
//    printf("\nSinh vien co diem tong ket cao nhat:\n");
//    printf("%-5d %-15s %-30s %-10.2f %-10.2f %-10.2f\n", sv[maxIndex].stt, sv[maxIndex].maSoSV, sv[maxIndex].hoTen, sv[maxIndex].diemTieuLuan, sv[maxIndex].diemThi, sv[maxIndex].diemTongKet);
//
//    printf("\nSinh vien co diem tong ket thap nhat:\n");
//    printf("%-5d %-15s %-30s %-10.2f %-10.2f %-10.2f\n", sv[minIndex].stt, sv[minIndex].maSoSV, sv[minIndex].hoTen, sv[minIndex].diemTieuLuan, sv[minIndex].diemThi, sv[minIndex].diemTongKet);
//}
//
//void kiemTraDiemDatKhongDat(SinhVien sv[], int n) {
//    int dat = 0, khongDat = 0;
//    for (int i = 0; i < n; i++) {
//        if (sv[i].diemTongKet >= 5.0) {
//            dat++;
//        }
//        else {
//            khongDat++;
//        }
//    }
//    printf("\nSo sinh vien dat: %d\n", dat);
//    printf("So sinh vien khong dat: %d\n", khongDat);
//}
//
//float quyDoiDiem(float diem) {
//    if (diem >= 8.5) return 4.0;
//    if (diem >= 7.0) return 3.0;
//    if (diem >= 5.5) return 2.0;
//    if (diem >= 4.0) return 1.0;
//    return 0.0;
//}
//
//void sapXepDanhSachSinhVien(SinhVien sv[], int n, int tang) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if ((tang && sv[i].diemTongKet > sv[j].diemTongKet) || (!tang && sv[i].diemTongKet < sv[j].diemTongKet)) {
//                SinhVien temp = sv[i];
//                sv[i] = sv[j];
//                sv[j] = temp;
//            }
//        }
//    }
//}
//
//float tinhDiemTrungBinh(SinhVien sv[], int n) {
//    float tongDiem = 0;
//    for (int i = 0; i < n; i++) {
//        tongDiem += sv[i].diemTongKet;
//    }
//    return tongDiem / n;
//}
