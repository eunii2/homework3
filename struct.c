#include <stdio.h>

struct student1 { //구조체 student1 정의
    char lastName; //문자형 변수 lastName 선언
    int studentId; //정수형 변수 studentId 선언
    char grade; // 문자형 변수 grade 선언
};

typedef struct { //구조체 student2 정의 (typedef 이용)
    char lastName; //문자형 변수 lastName 선언
    int studentId; //정수형 변수 studentId 선언
    char grade; // 문자형 변수 grade 선언
} student2;

int main() {
    printf("[----- [최가은] [2022078054] -----]\n\n"); //단순 출력

    struct student1 st1 = {'A', 100, 'A'}; //구조체 student1 변수 st1 정의 및 초기화

    printf("st1.lastName = %c\n", st1.lastName); //st1의 lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); //st1의 studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1의 grade 출력

    student2 st2 = {'B', 200, 'B'}; //구조체 student2 변수 st1 정의 및 초기화
    
    printf("\nst2.lastName = %c\n", st2.lastName); //st2의 lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); //st2의 studentId 출력
    printf("st2.grade = %c\n", st2.grade); //st2의 grade 출력
    
    student2 st3; //구조체 student2 변수 st3 선언

    st3 = st2; //st3에 st2 대입함을 선언

    printf("\nst3.lastName = %c\n", st3.lastName); //st3의 lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); //st3의 studentId 출력
    printf("st3.grade = %c\n", st3.grade); //st3의 grade 출력
    
    /* equality test */
    if((st3.lastName == st2.lastName)&&(st3.studentId == st2.studentId)&&(st3.grade == st2.grade))
    //st3 변수와 st2변수의 lastName, studentId, grade를 각각 비교
        printf("\nequal\n"); //같으면 equal 출력
    else
        printf("\nnot equal\n"); //아니면 not equal 출력

    return 0;
}