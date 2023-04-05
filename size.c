#include<stdio.h>
#include<stdlib.h>

void main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    int **x; //이중포인터 x선언

    printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x의 크기 출력
}