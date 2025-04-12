#include <stdio.h>

struct Student{
    char* name[20];
    int age;
    float average;
};

int main()
{
    struct Student first;
    printf("Enter name of student: ");
    scanf("%s", &first.name);
    printf("Enter age of student: ");
    scanf("%d", &first.age);
    printf("Enter average score of student: ");
    scanf("%f", &first.average);

    printf("Student %s (%d years) have average score: %.2f", first.name, first.age, first.average);

    return 0;
}