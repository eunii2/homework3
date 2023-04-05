#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n");

    int **x;

    printf("sizeof(x) = %lu\n", sizeof(x));
    printf("sizeof(*x) = %lu\n", sizeof(*x));
    printf("sizeof(**x) = %lu\n", sizeof(**x));
}