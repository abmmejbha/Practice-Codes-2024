#include <stdio.h>
#include <conio.h>
#include <ctype.h>

// how to create a structure??
struct student
{
    char name[50];
    int age;
    float cgpa;
};
// Function
// how to pass structure as a parameter into a function
// passing structure to function
void printStudentInfo(struct student s1) 
{
// printing student info
    printf("Name = %s\n",s1.name);
    printf("Age = %d\n",s1.age);
    printf("CGPA = %.2f\n",s1.cgpa);

}

int main()
{
// how to access a structure
    struct student s1;
// how to take a user input for a structure
    printf("Enter name:\n");
    gets(s1.name);

    printf("Enter your age:\n");
    scanf("%d", &s1.age);

    printf("Enter your cgpa:\n");
    scanf("%f", &s1.cgpa);

    // printing student info
    //calling function printStudentInfo
    printStudentInfo(s1);
    getchar();
}

