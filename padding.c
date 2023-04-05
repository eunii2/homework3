#include <stdio.h>

struct student { //구조체 student 정의
    char lastName[13]; /* 13 bytes */
    int studentId; /* 4 bytes */
    short grade; /* 2 bytes */
};
int main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    struct student pst; //구조체 student 타입의 변수 pst 선언

    printf("size of student = %ld\n", sizeof(struct student)); //구조체 student의 크기 출력
    printf("size of int = %ld\n", sizeof(int)); //자료형 int 타입의 크기를 출력
    printf("size of short = %ld\n", sizeof(short)); //자료형 short 타입의 크기를 출력
    
    return 0;
}