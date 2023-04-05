#include <stdio.h>

struct student {
    char lastName[13];
    int studentId;
    short grade;
};
int main()
{
    printf("[----- [최가은] [2022078054] -----]\n\n");

    struct student pst;

    printf("size of student = %ld\n", sizeof(struct student));
    printf("size of int = %ld\n", sizeof(int));
    printf("size of short = %ld\n", sizeof(short));
    
    return 0;
}