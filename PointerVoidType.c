#include<stdio.h>

int main() {

    int a = 1025;
    int *p = &a;

    void *p0;

    p0 = p;

    printf("Address = %d\n", p0 /*p0*/); //warning: dereferencing ‘void *’ pointer

    printf("Address = %d\n", p0+1);  // warning: format ‘%d’ expects argument of type ‘int’, 
                                    // but argument 2 has type ‘void *’
                                    // Pointer Arithmetic not support in Void Pointer

    


    return 0;
}