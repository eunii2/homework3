#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    int list[5]; //크기가 5인 배열 선언
    int *plist[5]; //5개의 포인터를 담을 포인터 배열 선언

    list[0] = 10; //list 배열의 첫 번째 원소를 10이라고 선언
    list[1] = 11; //list 배열의 두 번째 원소를 11이라고 선언

    plist[0] = (int*)malloc(sizeof(int)); //malloc 함수를 이용하여 동적으로 int형 메모리 공간을 할당함

    printf("list[0] \t= %d\n", list[0]); //list의 첫 번째 원소 10 출력
    printf("list \t\t= %p\n", list); //list의 첫 번째 원소의 주소 출력
    printf("&list[0] \t= %p\n", &list[0]); //list의 첫 번째 원소의 주소를 대입 후 출력
    printf("list + 0 \t= %p\n", list+0); //list의 첫 번째 원소의 주소를 대입 후 출력
    printf("list + 1 \t= %p\n", list+1); //list의 두 번째 원소의 주소를 대입 후 출력
    printf("list + 2 \t= %p\n", list+2); //list의 세 번째 원소의 주소를 대입 후 출력
    printf("list + 3 \t= %p\n", list+3); //list의 네 번째 원소의 주소를 대입 후 출력
    printf("list + 4 \t= %p\n", list+4); //list의 다섯 번째 원소의 주소를 대입 후 출력
    printf("&list[4] \t= %p\n", &list[4]); //list의 다섯 번째 원소의 주소를 대입 후 출력
    
    free(plist[0]); //동적으로 할당한 메모리 공간 해제
}