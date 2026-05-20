#include <stdio.h>

int main(void) {
    int s, n, res;

    scanf("%d", &n);

    for (int j = 0; j < n; j++) {

        char str[1000];
        res = 1;

        scanf("%d %s", &s, str);

        for (int i = 0; i < s / 2; i++) {

            if (str[i] != str[s - i - 1]) {
                res = 0;
                break;
            }
        }

        if (res == 0) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }

    return 0;
}