#include <stdio.h>

double average(double a,double b) {
    return (a+b)/2;
}

int main(void) {
    double r = average(8.0, 6.0);
    printf("%.2f\n", r);
    return 0;
}