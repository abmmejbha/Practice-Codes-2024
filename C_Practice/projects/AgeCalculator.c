// This is a C program that can tell the age of the user by taking their birth year and birth date as input
#include <stdio.h>
#include <time.h>

// This function returns the current year, month, and day
void get_current_date(int *year, int *month, int *day)
{
    // Get the current time
    time_t t = time(NULL);
    // Convert it to a structure that contains year, month, day, etc.
    struct tm *tm = localtime(&t);
    // Assign the values to the pointers
    *year = tm->tm_year + 1900; // tm_year is the number of years since 1900
    *month = tm->tm_mon + 1; // tm_mon is the month from 0 to 11
    *day = tm->tm_mday; // tm_mday is the day of the month from 1 to 31
}

// This function calculates the age of the user by subtracting their birth date from the current date
void calculate_age(int birth_year, int birth_month, int birth_day, int *age_year, int *age_month, int *age_day)
{
    // Get the current date
    int current_year, current_month, current_day;
    get_current_date(&current_year, &current_month, &current_day);
    
    // Check if the birth date is valid
    if (birth_year > current_year || (birth_year == current_year && (birth_month > current_month || (birth_month == current_month && birth_day > current_day))))
    {
        printf("Invalid birth date.\n");
        return;
    }
    
    // Calculate the age in years, months, and days
    *age_year = current_year - birth_year;
    *age_month = current_month - birth_month;
    *age_day = current_day - birth_day;
    
    // Adjust the values if necessary
    if (*age_day < 0)
    {
        // Borrow days from the previous month
        *age_day += 30; // Assume 30 days in a month for simplicity
        *age_month -= 1;
    }
    
    if (*age_month < 0)
    {
        // Borrow months from the previous year
        *age_month += 12;
        *age_year -= 1;
    }
}

// This is the main function that asks for the user's input and prints their age
int main()
{
    // Declare variables to store the user's input and output
    int birth_year, birth_month, birth_day;
    int age_year, age_month, age_day;
    
    // Ask for the user's input
    printf("Please enter your birth year: ");
    scanf("%d", &birth_year);
    
    printf("Please enter your birth month: ");
    scanf("%d", &birth_month);
    
    printf("Please enter your birth day: ");
    scanf("%d", &birth_day);
    
    // Calculate and print the user's age
    calculate_age(birth_year, birth_month, birth_day, &age_year, &age_month, &age_day);
    
    printf("You are %d years, %d months, and %d days old.\n", age_year, age_month, age_day);
    
    return 0;
}
