#include <stdio.h>

#define MAX_SIZE 100 //배열의 최대 크기를 100으로 정의

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);
//원소들의 합을 계산하는 함수들을 선언

float input[MAX_SIZE], answer; //input을 집어넣을 배열과 answer 변수를 float형으로 선언
int i; //변수 i 선언

void main(void)
{
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    for(i=0; i < MAX_SIZE; i++)
        input[i] = i; //배열의 원소를 i값에 따라 0부터 99까지 초기화

    /* for checking call by reference */
    printf("--------------------------------------\n"); //단순 출력
    printf(" sum1(input, MAX_SIZE) \n"); //단순 출력
    printf("--------------------------------------\n"); //단순 출력
    printf("input \t= %p\n", input); //input 배열의 시작 주소를 출력
    
    answer = sum1(input, MAX_SIZE); //answer에 sum1(input, MAX_SIZE)함수의 반환값을 할당함을 선언
    printf("The sum is: %f\n\n", answer); //계산된 총합을 넣은 후 출력
    
    printf("--------------------------------------\n"); //단순 출력
    printf(" sum2(input, MAX_SIZE) \n"); //단순 출력
    printf("--------------------------------------\n"); //단순 출력
    printf("input \t= %p\n", input); //input 배열의 시작 주소를 출력
    
    answer = sum2(input, MAX_SIZE); //answer에 sum2(input, MAX_SIZE)함수의 반환값을 할당함을 선언
    printf("The sum is: %f\n\n", answer); //계산된 총합을 넣은 후 출력
    
    printf("--------------------------------------\n"); //단순 출력
    printf(" sum3(MAX_SIZE, input) \n"); //단순 출력
    printf("--------------------------------------\n"); //단순 출력
    printf("input \t= %p\n", input); //input 배열의 시작 주소를 출력
    
    answer = sum3(MAX_SIZE, input); //answer에 sum3(input, MAX_SIZE)함수의 반환값을 할당함을 선언
    printf("The sum is: %f\n\n", answer); //계산된 총합을 넣은 후 출력
}

float sum1(float list[], int n) 
{
    printf("list\t= %p\n", list); //list 배열의 시작 주소를 넣은 후 출력
    printf("&list\t= %p\n\n", &list); //list 배열의 시작 주소를 저장하고 있는 포인터 변수의 주소를
    //넣은 후 출력

    int i;
    float tempsum = 0;
    for(i = 0; i < n; i++) // 배열의 n번째 원소까지 모두 더한다
        tempsum += list[i];
    return tempsum; //누적된 합을 반환
}
float sum2(float *list, int n) 
{
    printf("list\t= %p\n", list); //list 배열의 첫 번째 원소의 주소값을 넣은 후 출력
    printf("&list\t= %p\n\n", &list); //list 배열의 주소값을 출력
    //
    int i;
    float tempsum = 0; //tempsum 초기화
    for(i = 0; i < n; i++)
        tempsum += *(list +i); //포인터 산술 연산을 사용하여 값을 누적시킴
    return tempsum; //누적된 합을 반환
}

/* stack variable reuse test */
float sum3(int n, float *list) 
{
    printf("list\t= %p\n", list); //list 배열의 메모리 주소를 넣은 후 출력
    printf("&list\t= %p\n\n", &list); //list 배열의 포인터 변수의 메모리 주소를 넣은 후 출력

    int i;
    float tempsum = 0; //tempsum 초기화
    for(i = 0; i < n; i++)
        tempsum += *(list +i); //tempsum에 포인트 산술 연산을 사용하여 값을 누적
    return tempsum; //누적된 합을 반환
}