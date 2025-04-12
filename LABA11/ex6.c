#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

int main()
{
    FILE *inputFile, *outputFile;
    char studentNames[MAX_STUDENTS][NAME_LENGTH];
    char attendance[MAX_STUDENTS];
    int count = 0;

    inputFile = fopen("students.txt", "r");
    if (inputFile == NULL)
    {
        perror("Cann't be openned students.txt");
        return EXIT_FAILURE;
    }

    while (fgets(studentNames[count], NAME_LENGTH, inputFile) != NULL && count < MAX_STUDENTS)
    {
        studentNames[count][strcspn(studentNames[count], "\n")] = 0;
        count++;
    }
    fclose(inputFile);

    for (int i = 0; i < count; i++)
    {
        printf("Student: %s. is here? (y/n): ", studentNames[i]);
        char response;
        scanf(" %c", &response);
        attendance[i] = (response == 'y' || response == 'Y') ? 'Y' : 'N';
    }

    outputFile = fopen("attendance.txt", "w");
    if (outputFile == NULL)
    {
        perror("Cann't be openned attendance.txt");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < count; i++)
    {
        fprintf(outputFile, "%s: %c\n", studentNames[i], attendance[i]);
    }

    fclose(outputFile);

    printf("Res in attendance.txt\n");

    return 0;
}