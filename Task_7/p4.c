#include <stdio.h>
#include <string.h>

typedef enum {
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    INVALID_DAY
} DayOfWeek;

DayOfWeek string_to_day(const char* day_str) {
    if (strcmp(day_str, "SATURDAY") == 0) return SATURDAY;
    if (strcmp(day_str, "SUNDAY") == 0) return SUNDAY;
    if (strcmp(day_str, "MONDAY") == 0) return MONDAY;
    if (strcmp(day_str, "TUESDAY") == 0) return TUESDAY;
    if (strcmp(day_str, "WEDNESDAY") == 0) return WEDNESDAY;
    if (strcmp(day_str, "THURSDAY") == 0) return THURSDAY;
    if (strcmp(day_str, "FRIDAY") == 0) return FRIDAY;
    return INVALID_DAY;
}

const char* is_weekend(DayOfWeek day) {
    if (day == SATURDAY || day == FRIDAY) {
        return "Weekend";
    } else if (day == INVALID_DAY) {
        return "Invalid day";
    } else {
        return "Weekday";
    }
}

int main() {
    char input_day[20];
    
    printf("Enter today's day (for example TUESDAY)  : ");
    scanf("%19s", input_day);
    
    for (int i = 0; input_day[i]; i++) {
        input_day[i] = toupper(input_day[i]);
    }
    
    DayOfWeek today = string_to_day(input_day);
    
    printf("\nToday is %s - %s\n", input_day, is_weekend(today));
    
    return 0;
}