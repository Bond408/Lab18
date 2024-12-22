#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

void main() {

	setlocale(LC_ALL, "RUS");
    struct tm* mytime;
    time_t t;
    t = time(NULL);
    mytime = localtime(&t);
    printf("Московское время: %02d:%02d:%02d\n",
    mytime->tm_hour, mytime->tm_min, mytime->tm_sec);
    int day = mytime->tm_yday + 1;
    int year = mytime->tm_year + 1900;

    char string[80];
    sprintf(string, "Сегодня %d-й день %d года", day, year);
    printf("%s\n", string);
}