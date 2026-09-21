//Write a C program that accepts input as day, month, and year. Determine whether the date is valid. Consider:
//Months with 30 or 31 days//
//February with 28 days//
//February with 29 days in a leap year//
//Invalid years, months, and days//

#include <stdio.h>
int main() {
    int day, month, year;
    
    // Accept input from user
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    if (year < 1) {
        printf("Invalid year.\n");
        return 0;
    }

    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 0;
    }
    
    int isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    
    if (month == 2) {
        if (isLeapYear) {
            if (day < 1 || day > 29) {
                printf("Invalid day for February in a leap year.\n");
                return 0;
            }
        } else {
            if (day < 1 || day > 28) {
                printf("Invalid day for February.\n");
                return 0;
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day < 1 || day > 30) {
            printf("Invalid day for the given month.\n");
            return 0;
        }
    } else {
        if (day < 1 || day > 31) {
            printf("Invalid day for the given month.\n");
            return 0;
        }
    }
    
    printf("The date %02d/%02d/%04d is valid.\n", day, month, year);
    
    return 0;
}
