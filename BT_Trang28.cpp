#include <stdio.h>

// Hàm tính m^n
int power(int m, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= m;
    }
    return result;
}

// Hàm tính UCLN(a, b)
int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

// Hàm tính giá trị thứ n của cấp số cộng
int capSoCong(int a, int r, int n) {
    return a + (n - 1) * r;
}

// Hàm tính giá trị thứ n của cấp số nhân
int capSoNhan(int a, int q, int n) {
    int result = a;
    for (int i = 1; i < n; i++) {
        result *= q;
    }
    return result;
}

// Hàm tính giá trị thứ n của dãy
int day(int n) {
    if (n < 6)
        return n;
    return day(n - 5) + day(n - 4) + day(n - 3) + day(n - 2) + day(n - 1);
}

int main() {
    int choice, m, n, a, b, r, q;

    do {
        printf("\nMenu:\n");
        printf("1. Tinh m^n\n");
        printf("2. Tinh UCLN(a, b)\n");
        printf("3. Gia tri thu n cua cap so cong\n");
        printf("4. Gia tri thu n cua cap so nhan\n");
        printf("5. Gia tri thu n cua day\n");
        printf("0. Thoat\n");
        printf("Chon mot tuy chon: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            printf("Nhap m va n: ");
            scanf_s("%d %d", &m, &n);
            printf("%d^%d = %d\n", m, n, power(m, n));
            break;
        case 2:
            printf("Nhap a va b: ");
            scanf_s("%d %d", &a, &b);
            printf("UCLN(%d, %d) = %d\n", a, b, UCLN(a, b));
            break;
        case 3:
            printf("Nhap a, r va n: ");
            scanf_s("%d %d %d", &a, &r, &n);
            printf("Gia tri thu %d cua cap so cong la %d\n", n, capSoCong(a, r, n));
            break;
        case 4:
            printf("Nhap a, q va n: ");
            scanf_s("%d %d %d", &a, &q, &n);
            printf("Gia tri thu %d cua cap so nhan la %d\n", n, capSoNhan(a, q, n));
            break;
        case 5:
            printf("Nhap n: ");
            scanf_s("%d", &n);
            printf("Gia tri thu %d cua day la %d\n", n, day(n));
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Tuy chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 0);

    return 0;
}
