#include <stdio.h>
#include <ctype.h>
#include <conio.h>

// declaring a structure
struct student
{
    char name[30];
    int age;
    float cgpa;
};

// declaring a function
void printStudentInfo(struct student s1)
{
    // printing student info
    printf("Name = %s\n", s1.name);
    printf("Age = %d\n", s1.age);
    printf("CGPA = %.2f\n", s1.cgpa);
}

int main()
{
    // accessing structure's DATA

    // declaring array of structure
    struct student s1[4];

    // taking input structure's data
    for (int i = 0; i < 4; i++)
    {
        printf("Enter student %d Name:", i + 1);
        fflush(stdin);
        fgets(s1[i].name, sizeof(s1[i].name), stdin);

        printf("Age:");
        scanf("%d", &s1[i].age);

        printf("CGPA:");
        scanf("%f", &s1[i].cgpa);
    }

    // calling function by loop
    // all students data by loop
    for (int i = 0; i < 4; i++)
    {
        printf("Information for student %d\n", i + 1);
        printStudentInfo(s1[i]);
    }

    getchar();
}
