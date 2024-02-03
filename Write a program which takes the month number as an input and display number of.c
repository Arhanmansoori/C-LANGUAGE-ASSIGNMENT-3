#include <stdio.h>

int main()
{
    int month;


    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        return 1;
    }


    if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("The month %d has 30 days.\n", month);
    }

    else if (month == 2) {
        printf("Enter the year to determine whether February has 28 or 29 days: ");
        int year;
        scanf("%d", &year);


        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("The month 2 (February) in the year %d has 29 days (Leap year).\n", year);
        } else {
            printf("The month 2 (February) in the year %d has 28 days.\n", year);
        }
    }

    else {
        printf("The month %d has 31 days.\n", month);
    }

    return 0;
}
