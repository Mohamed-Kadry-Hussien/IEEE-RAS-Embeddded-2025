#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};

void readDate(struct Date *d) {
    printf("Enter day: ");
    scanf("%d", &d->day);
    printf("Enter month: ");
    scanf("%d", &d->month);
    printf("Enter year: ");
    scanf("%d", &d->year);
}

int compareDates(struct Date *d1, struct Date *d2) {
    return (d1->day == d2->day && d1->month == d2->month && d1->year == d2->year);
}

int main() {
    struct Date date1, date2;

    printf("Enter the first date:\n");
    readDate(&date1);

    printf("Enter the second date:\n");
    readDate(&date2);

    if (compareDates(&date1, &date2)) { 
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}