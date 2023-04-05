#include <stdio.h>

void print_one(int *ptr, int rows); //print_one 함수 정의 및 선언

int main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    int one[] = {0, 1, 2, 3, 4}; //배열 one 선언 및 초기화

    printf("one = %p\n", one); //배열의 첫 번째 원소의 주소를 출력
    printf("&one = %p\n", &one); //&one은 배열 one의 포인터, 배열 one의 첫 번째 원소의 주소를 출력
    printf("&one[0] = %p\n", &one[0]); //첫 번째 원소의 주소 출력
    printf("\n");

    printf("------------------------------------\n"); //단순 출력
    printf(" print_one(&one[0], 5) \n"); //단순 출력
    printf("------------------------------------\n"); //단순 출력
    print_one(&one[0], 5); //배열 원의 첫번째 원소의 주소와 배열의 길이 5를 print_one 함수에 전달

    printf("------------------------------------\n"); //단순 출력
    printf(" print_one(one, 5) \n"); //단순 출력
    printf("------------------------------------\n"); //단순 출력
    print_one(one, 5); // 배열 one과 배열의 길이 5를 print_one 함수에 전달

    return 0;
}

void print_one(int *ptr, int rows)
{/* print out a one-dimensional array using a pointer */

    int i; //변수 i 선언
    printf ("Address \t Contents\n"); //단순 출력
    for (i = 0; i < rows; i++) //배열의 원소 수 만큼을 반복
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //배열의 i번째 원소의 주소와 내용 출력
    printf("\n");
}