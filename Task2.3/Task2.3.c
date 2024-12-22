#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <string.h>

#define SCREEN_WIDTH 80

int main() {
    setlocale(LC_ALL, "RUS");

    struct tm* mytime;
    time_t t;
    t = time(NULL);
    mytime = localtime(&t);


    char time_string[80];
    sprintf(time_string, "Московское время: %02d:%02d:%02d", mytime->tm_hour, mytime->tm_min, mytime->tm_sec);

    int day = mytime->tm_yday + 1;
    int year = mytime->tm_year + 1900;
    char date_string[80];
    sprintf(date_string, "Сегодня %d-й день %d года", day, year);

    for (int i = 0; i < SCREEN_WIDTH; i++) putchar('*');
    putchar('\n');


    int padding_time = (SCREEN_WIDTH - strlen(time_string)) / 2;
    for (int i = 0; i < padding_time; i++) 
        putchar('*');
    printf("%s", time_string);
    for (int i = 0; i < SCREEN_WIDTH - padding_time - strlen(time_string); i++) 
        putchar('*');
    putchar('\n');

    int padding_date = (SCREEN_WIDTH - strlen(date_string)) / 2;
    for (int i = 0; i < padding_date; i++) putchar('*');
    printf("%s", date_string);
    for (int i = 0; i < SCREEN_WIDTH - padding_date - strlen(date_string); i++) putchar('*');
    putchar('\n');

    for (int i = 0; i < SCREEN_WIDTH; i++) putchar('*');
    putchar('\n');
}