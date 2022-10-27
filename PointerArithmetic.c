#include<stdio.h>


int main() {

    int a = 10;

    int *p = &a;

    printf("Address P is : %d\n", p);
    printf("Value at Address P is : %d\n", *p);
    printf("%d\n", p+1);
    printf("Value at Address P is : %d\n", *(p+1));







    return 0;
}