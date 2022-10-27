#include<stdio.h>
 
int main() {

    // int a = 10;
    const int a = 10;
    int *p;
    // a = 10;
    p = &a;
    printf("%d\n",a);
    *p = 100; // derefrencing

    int b = 20;
    *p = b;

    printf("%d \n",p);

    printf("%d\n", p); // adress
    printf("%d\n",*p); // value
    printf("%d\n",&a); // address







    return 0;
}