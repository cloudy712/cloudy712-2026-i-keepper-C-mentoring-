#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(void) {
    int a, b = 1, n;

    printf("숫자를 입력해주세요: ");
    scanf("%d", &n);

    
    a = factorial(n);

    
    for (int i = 1; i <= n; i++) {
        b = b * i;
    }

    printf("계산 결과: %d %d\n", a, b);

    return 0;
}