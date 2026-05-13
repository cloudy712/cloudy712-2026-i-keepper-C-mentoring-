#include <stdio.h>

int is_prime(int n) {
    int res = 0;

    if (n <= 1) {
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            res++;
        }
    }

    if (res == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_prime(n) == 1) {
        printf("%d는 소수입니다.\n", n);
    } else {
        printf("%d는 소수가 아닙니다.\n", n);
    }

    return 0;
}