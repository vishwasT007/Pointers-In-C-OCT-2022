#include<stdio.h>


int main() {

    int a = 1025;

    int *p = &a;
    printf("Size of integer is %d Bytes \n:",sizeof(int));
    printf("Address = %d, Value = %d\n", p, *p);
    printf("Address = %d, Value = %d\n", p+1, *(p+1));

     char *P0;

     P0 = (char*)p; // TypeCasting
    printf("Size of Character is %d Bytes \n:",sizeof(char));
    // printf("Address P is : %d\n", p);
    printf("Address = %d, Value = %d\n", P0, *P0);
    printf("Address = %d, Value = %d\n", P0+1, *(P0+1));

    printf(" \n \n Value at Address P is : %d\n", *p);
    printf("%d\n", p+1);
    printf("Value at Address P is : %d\n", *(p+1));







    return 0;
}