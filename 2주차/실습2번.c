#include <stdio.h>

int main(void) {
    int A;
    scanf("%d",&A);

    if(A>=90){
        printf("당신의 시험 등급은 A 입니다\n");
    }
    else if (A>=80) {
        printf("당신의 시험 등급은 B 입니다\n");
    }
    else if (A>=70) {
        printf("당신의 시험 등급은 C 입니다\n");
}
    else if (A>=60) {
        printf("당신의 시험 등급은 D 입니다\n");
}
    else if (A>=50) {
        printf("당신의 시험 등급은 E 입니다\n");
}
    else {
        printf("당신의 시험 등급은 F 입니다\n");
}
}
