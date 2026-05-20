#include <stdio.h>

int main() {
    int n;
    int A = 0;
    int B = 0;
    char string[1000];

    scanf("%d", &n);
    scanf("%s", string);


    for (int i = 0; i < n; i++) {

        if (string[i] == 'A') {
            A++;
        }
        else {
            B++;
        }
    }


    if (A > B) {
        printf("A");
    }
    else if (B > A) {
        printf("B");
    }
    else {
        printf("0");
    }

    return 0;
}