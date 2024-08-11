#include <stdio.h>
#include <stdlib.h>

// Cấu trúc phân số
typedef struct {
    int numerator;   // Tử số
    int denominator; // Mẫu số
} Fraction;

// Hàm nhập phân số
void inputFraction(Fraction* f) {
    printf("Nhap tu so: ");
    scanf_s("%d", &f->numerator);
    printf("Nhap mau so: ");
    scanf_s("%d", &f->denominator);
    while (f->denominator == 0) {
        printf("Mau so phai khac 0. Nhap lai mau so: ");
        scanf_s("%d", &f->denominator);
    }
}

// Hàm xuất phân số
void printFraction(Fraction f) {
    if (f.denominator == 1) {
        printf("%d\n", f.numerator);
    }
    else {
        printf("%d/%d\n", f.numerator, f.denominator);
    }
}

// Hàm tìm ước chung lớn nhất
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tối giản phân số
void simplifyFraction(Fraction* f) {
    int divisor = gcd(abs(f->numerator), abs(f->denominator));
    f->numerator /= divisor;
    f->denominator /= divisor;
    // Đảm bảo mẫu số dương
    if (f->denominator < 0) {
        f->denominator = -f->denominator;
        f->numerator = -f->numerator;
    }
}

// Hàm cộng hai phân số
Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplifyFraction(&result);
    return result;
}

// Hàm trừ hai phân số
Fraction subtractFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    result.denominator = f1.denominator * f2.denominator;
    simplifyFraction(&result);
    return result;
}

// Hàm nhân hai phân số
Fraction multiplyFractions(Fraction f1, Fraction f2) {
    Fraction result;
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    simplifyFraction(&result);
    return result;
}

// Hàm chia hai phân số
Fraction divideFractions(Fraction f1, Fraction f2) {
    Fraction result;
    if (f2.numerator == 0) {
        printf("Loi: chia cho 0!\n");
        exit(1);
    }
    result.numerator = f1.numerator * f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    simplifyFraction(&result);
    return result;
}

int main() {
    Fraction f1, f2;

    // Nhập hai phân số
    printf("Nhap phan so thu nhat:\n");
    inputFraction(&f1);
    printf("Nhap phan so thu hai:\n");
    inputFraction(&f2);

    // Tính toán và xuất kết quả
    Fraction sum = addFractions(f1, f2);
    Fraction difference = subtractFractions(f1, f2);
    Fraction product = multiplyFractions(f1, f2);
    Fraction quotient = divideFractions(f1, f2);

    printf("Tong hai phan so: ");
    printFraction(sum);

    printf("Hieu hai phan so: ");
    printFraction(difference);

    printf("Tich hai phan so: ");
    printFraction(product);

    printf("Thuong hai phan so: ");
    printFraction(quotient);

    return 0;
}
