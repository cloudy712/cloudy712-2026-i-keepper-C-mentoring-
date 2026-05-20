#include <stdio.h>

int main() {
    int T;
    int A_res, B_res, C_res;

    scanf("%d", &T);

    A_res = T / 300;
    T -= A_res * 300;

    B_res = T / 60;
    T -= B_res * 60;

    C_res = T / 10;
    T -= C_res * 10;

    if (T > 0) {
        printf("-1\n");
    } else {
        printf("%d %d %d\n", A_res, B_res, C_res);
    }

    return 0;
}