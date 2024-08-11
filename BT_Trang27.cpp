#include <iostream>
#include <cmath>
using namespace std;

int S1(int n) {
    return n * (n + 1) / 2;
}

double S2(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 2.0 / (sqrt(i) + sqrt(i + 1));
    }
    return sum;
}

double S3(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / (i * (i + 1));
    }
    return sum;
}

int S4(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(-1, i + 1) * i * i;
    }
    return sum;
}

long long S5(int n) {
    long long sum = 0;
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
        sum += fact;
    }
    return sum;
}

long long S6(int n) {
    long long sum = 0;
    long long fact = 1;
    for (int i = 0; i <= n; ++i) {
        fact *= (n + i);
        sum += fact;
    }
    return sum;
}

double S7(int n) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += tgamma(n + 1) / pow(tgamma(i + 1), 3);
    }
    return sum;
}

double S8(int n) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += pow(tgamma(i + 1), 4) / pow(4 * tgamma(i + 1), 4);
    }
    return sum;
}


double S9(int n) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        double inner_sum = 0;
        for (int j = 0; j <= i; ++j) {
            double inner_inner_sum = 0;
            for (int k = 0; k <= j; ++k) {
                double inner_inner_inner_sum = 0;
                for (int m = 0; m <= k; ++m) {
                    double inner_inner_inner_inner_sum = 0;
                    for (int l = 0; l <= m; ++l) {
                        inner_inner_inner_inner_sum += pow((double)l / (l + m), l + m);
                    }
                    inner_inner_inner_sum += pow((double)m / (m + k), m + k) * inner_inner_inner_inner_sum;
                }
                inner_inner_sum += pow((double)k / (k + j), k + j) * inner_inner_inner_sum;
            }
            inner_sum += pow((double)j / (j + i), j + i) * inner_inner_sum;
        }
        sum += pow((double)i / (i + n), i + n) * inner_sum;
    }
    return sum;
}

double S10(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow((double)i / (i + 1), 1.0 / 5);
    }
    return sum;
}

double S11(int n) {
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += pow((double)i / (i + 1), 1.0 / 5);
    }
    return sum;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf_s("%d", &n);

    printf("S1(n) = %d\n", S1(n));
    printf("S2(n) = %lf\n", S2(n));
    printf("S3(n) = %lf\n", S3(n));
    printf("S4(n) = %d\n", S4(n));
    printf("S5(n) = %lld\n", S5(n));
    printf("S6(n) = %lld\n", S6(n));
    printf("S7(n) = %lf\n", S7(n));
    printf("S8(n) = %lf\n", S8(n));
    printf("S9(n) = %lf\n", S9(n));
    printf("S10(n) = %lf\n", S10(n));
    printf("S11(n) = %lf\n", S11(n));

    return 0;
}
