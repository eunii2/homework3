#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    int list[5]; //int형 변수를 담을 5칸짜리 list배열 생성
    int *plist[5] = {NULL,}; //5개의 int형 포인터를 담을 포인터 배열 plist 선언하고 NULL로 초기화

    plist[0] = (int *)malloc(sizeof(int)); //plist[0]에 int 크기만큼 동적 메모리 할당
    
    list[0] = 1; //list[0]에 1 대입
    list[1] = 100; //list[1]에 100 대입

    *plist[0] = 200;//plist[0]이 가리키는 공간에 200 대입

    //배열은 연속된 메모리 블록으로 이루어진 자료구조

    printf("list[0] = %d\n", list[0]); //list[0]의 값 1 출력
    printf("&list[0] = %p\n", &list[0]); //list[0]의 주소 출력
    printf("list = %p\n", list); //배열 list의 시작 출력(=list[0]의 주소)
    printf("&list = %p\n", &list); //배열 list의 시작 주소 출력
    //list와 &list의 출력값이 같은 이유 : list가 배열의 이름이지만, list가 가리키는 것은
    //배열의 첫번째 원소인 'list[0]'의 주소. 따라서 list와 &list는 같은 값을 가짐.

    printf("----------------------------------------\n\n"); //단순 출력
    printf("list[1] = %d\n", list[1]); //list[1]의 값 100 출력
    printf("&list[1] = %p\n", &list[1]); //list[1]의 주소 출력
    printf("*(list+1) = %d\n", *(list + 1)); //배열 list에서 1만큼 떨어진 주소 출력(=list[1]의 주소)
    printf("list+1 = %p\n", list+1); //배열 두번째 원소의 주소 출력
    printf("----------------------------------------\n\n"); //단순 출력
    
    printf("*plist[0] = %d\n", *plist[0]); //plist[0]이 가리키는 곳의 값 출력
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); //포인터 배열의 시작 주소를 출력
    printf("plist = %p\n", plist); //plist는 포인터 배열, plist[0]의 주소 출력
    printf("plist[0] = %p\n", plist[0]); //plist[0]은 malloc함수로부터 동적 할당된 메모리 블록의 시작 주소 반환
    //동적 할당된 메모리 블록의 시작 주소 출력
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    //위의 배열들은 초기화 되지 않았으므로 NULL값 출력. 동적으로 메모리가 할당되지 않음.
    
    free(plist[0]); //동적 메모리 할당 해제
}