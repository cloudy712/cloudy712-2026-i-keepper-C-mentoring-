#include <stdio.h>

int main() {
    int A, B;

    scanf("%d %d", &A, &B);


    if (A > B) {
        int temp = A;
        A = B;
        B = temp;
    }


    printf("%d\n", B - A - 1);

    for (int i = A + 1; i < B; i++) {
        printf("%d ", i);
    }

    return 0;
}