#include<stdio.h>

int main() {

    int x = 5;
    int *p = &x;

    *p = 6;

    int **Q;

    Q = &p;

    int ***R;

    R = &Q;

    printf("%d\n", *p ); // 6

    printf("%d\n", *Q ); // ADDRESS OF P

    printf("%d\n", *(*Q)); // 6

    printf("%d\n", *(*R)); // Address of Q and then derefrence and Address of P WIll get

    printf("%d\n",*(*(*R))); // 6




    


    return 0;
}