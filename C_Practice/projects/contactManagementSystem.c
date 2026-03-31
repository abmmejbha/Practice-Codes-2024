#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>


// Structure
struct Contact
{ // Name of the structure is "Contact"
    char name[50];
    char phone[50];
    char email[50]
};

// Function for adding contacts
void addContact()
{
    FILE *file;
    file = fopen("contact.txt", "a");
    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opened\n");
    }
    // here "Contact" is the structure name
    // "student" is a block of structure
    struct Contact student;

    printf("Enter name: \n");
    fflush(stdin);
    fgets(student.name, sizeof student.name, stdin);

    printf("Enter phone: \n");
    fgets(student.phone, sizeof student.phone, stdin);

    printf("Enter email: \n");
    fgets(student.email, sizeof student.email, stdin);

    // write to the file
    fprintf(file, "%s%s%s\n", student.name, student.phone, student.email);

    //system("cls");
    printf("Added to the Contact List!!!\n");
    fclose(file);
}

// Reading from file
void displayContact()
{
    struct Contact student;

    FILE *file;
    file = fopen("contact.txt", "r");
    if (file == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("\nFile is opened!!\n");
    }
    printf("Contacts list is shown below...\n");
    /*
    Reading from file
    For How long you want to read the file
    %[^\n] =  (this means) it  will take the name value until it gets a new line
    While the last line of the file                        *EOF=End Of File
    */
    while (fscanf(file, " %[^\n] %[^\n] %[^\n]", student.name, student.phone, student.email) != EOF)
    {
        printf("\nName: %s\nPhone:%s\nEmail:%s\n\n", student.name, student.phone, student.email);
    }
    fclose(file);
}

int main()
{
    // addContact();
    // displayContact();

    int choice;
    do
    {
        printf("\n\n--------Contact Management Systems-------\n\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n\n");

        printf("Enter Your Choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact();
            break;
        case 2:
            displayContact();
            break;
        case 3:
            printf("\n-------------------Exited----------------");
            break;
        default:
            printf("Invalid Choice!!!\n");
            break;
        }

    } while (choice != 3);

    getch();
}
