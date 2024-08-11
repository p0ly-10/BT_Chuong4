#include <stdio.h>
#include <stdbool.h>
#include <corecrt_malloc.h>

// Hàm tính số hạng thứ n của dãy số bài 7
int bai7() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    // Cấp phát bộ nhớ động cho mảng A
    int* A = (int*)malloc((n + 1) * sizeof(int));
    if (A == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    A[0] = 1;
    A[1] = 2;

    for (int i = 2; i <= n; i++) {
        A[i] = A[i - 1] + (i - 1) * A[i - 2];
    }

    printf("So hang thu %d cua day so la: %d\n", n, A[n]);
}

// Hàm tính f(n) bài 8
int f(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return 2 * f(n / 2);
    return 2 * f(n / 2) + 3 * f(n / 2 + 1);
}

void bai8() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("Gia tri cua f(%d) la: %d\n", n, f(n));
}

// Hàm kiểm tra số nguyên tố bài 10
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void bai10() {
    int x;
    printf("Nhap x: ");
    scanf_s("%d", &x);

    if (isPrime(x)) {
        printf("%d la so nguyen to.\n", x);
    }
    else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

// Hàm kiểm tra số Fibonacci bài 11
bool isFibonacci(int n) {
    int a = 0, b = 1, c;
    if (n == a || n == b) return true;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
        if (b == n) return true;
    }
    return false;
}

void bai11() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    if (isFibonacci(n)) {
        printf("%d la so Fibonacci.\n", n);
    }
    else {
        printf("%d khong phai la so Fibonacci.\n", n);
    }
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Bai 7\n");
        printf("2. Bai 8\n");
        printf("3. Bai 10\n");
        printf("4. Bai 11\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon: ");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            bai7();
            break;
        case 2:
            bai8();
            break;
        case 3:
            bai10();
            break;
        case 4:
            bai11();
            break;
        case 5:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 5);

    return 0;
}
