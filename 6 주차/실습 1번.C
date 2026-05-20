#include <stdio.h>
int main(void) {
    int a = 25;
    int *p = &a;
    printf("%d %d %p\n",a,*p,&a);
    
    *p =100;
    printf("%d %d %p\n",a,*p,&a);

}