#include <stdio.h>

void main()
{
    // Declare variables (normal and pointer) 
    int m = 300, *pm;               
    float fx = 300.600006, *pfx;
    char cht = 'z', *pcht;
    
    // Pointer initalization
    pm = &m;
    pfx = &fx;
    pcht = &cht;

    printf("\nPointer: Demonstrate the use of & and * operator:\n--------------------------------------------------------------------\n");

    printf("m = %d\n", m);                          // Display normal variable
    printf("fx = %f\n", fx);
    printf("cht = %c\n", cht);

    printf("\nUsing & operator:\n----------------------------------\n");
    printf("address of m = %p\n", &m);              // Display address of variables using & operator
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);

    printf("\nUsing & and * operator:\n----------------------------------\n");
    printf("value at address of m = %d\n", *(&m));  // Displace value using & and * operator 
    printf("value at address of fx = %f\n", *(&fx));
    printf("value at address of cht = %c\n", *(&cht));

    printf("\nUsing only pointer variable:\n----------------------------------\n");
    printf("address of m = %p\n", pm);              // Display address of variable using pointer variable
    printf("address of fx = %p\n", pfx);
    printf("address of cht = %p\n", pcht);

    printf("\nUsing only pointer operator:\n----------------------------------\n");
    printf("value at address of m = %d\n", *pm);    // Display value using pointer operator 
    printf("value at address of fx = %f\n", *pfx);
    printf("value at address of cht = %c\n", *pcht);
}