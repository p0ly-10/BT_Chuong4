#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Bài 12: Tìm số Fibonacci lớn nhất nhưng nhỏ hơn n
int fibonacci(int n) {
    int a = 0, b = 1, c = 1;
    while (c < n) {
        a = b;
        b = c;
        c = a + b;
    }
    return b;
}

void bai12() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, fibonacci(n));
}

// Bài 13: Tính số hạng thứ n của dãy 
int x(int n) {
    if (n == 0) return 1;
    if (n == 1) return -1;

    int x0 = 1, x1 = -1, x2;
    for (int i = 2; i <= n; i++) {
        x2 = x(i - 3) + x(i - 2) - x(i - 1);
    }
    return x2;
}

void bai13() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("So hang thu %d cua day la: %d\n", n, x(n));
}

// Bài 14: Tính A_n sử dụng đệ quy
int A(int n) {
    if (n == 1) return 1;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        sum += A(i);
    }
    return n * sum;
}

void bai14() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Gia tri cua A(%d) la: %d\n", n, A(n));
}

// Bài 15: Tính Y_n sử dụng đệ quy
int Y(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return Y(n - 1) + 2 * Y(n - 2) + 3 * Y(n - 3);
}

void bai15() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Gia tri cua Y(%d) la: %d\n", n, Y(n));
}

// Bài 16: Tính X_n sử dụng đệ quy
int X(int n) {
    if (n == 1 || n == 2) return 1;
    return X(n - 1) + (n - 1) * X(n - 2);
}

void bai16() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);
    printf("Gia tri cua X(%d) la: %d\n", n, X(n));
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Bai 12\n");
        printf("2. Bai 13\n");
        printf("3. Bai 14\n");
        printf("4. Bai 15\n");
        printf("5. Bai 16\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            bai12();
            break;
        case 2:
            bai13();
            break;
        case 3:
            bai14();
            break;
        case 4:
            bai15();
            break;
        case 5:
            bai16();
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}
