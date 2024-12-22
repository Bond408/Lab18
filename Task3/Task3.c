#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_MOVIES 10
#define GENRE_LENGTH 20
#define TITLE_LENGTH 50

typedef struct {
    char title[TITLE_LENGTH];       // Название фильма
    char date[11];                  // Дата сеанса
    int hour;                       // Час начала сеанса
    int minute;                     // Минута начала сеанса
    int duration;                   // Продолжительность сеанса
    char genre[GENRE_LENGTH];       // Жанр фильма
    double budget;                  // Бюджет фильма
} Movie;

void print_movie(const Movie* movie) {
    printf("Название: %s\n", movie->title);
    printf("Дата: %s\n", movie->date);
    printf("Время: %02d:%02d\n", movie->hour, movie->minute);
    printf("Продолжительность: %d мин\n", movie->duration);
    printf("Жанр: %s\n", movie->genre);
    printf("Бюджет: %.2f млн $\n", movie->budget);
    printf("----------------------\n");
}

int main() {
    setlocale(LC_ALL, "RUS");
    Movie movies[MAX_MOVIES];
    int movie_count = 5; // Количество фильмов (можно увеличить)

    strcpy(movies[0].title, "Экшн-фильм 1");
    strcpy(movies[0].date, "22.12.2024");
    movies[0].hour = 14;
    movies[0].minute = 30;
    movies[0].duration = 120;
    strcpy(movies[0].genre, "боевик");
    movies[0].budget = 100.0;

    strcpy(movies[1].title, "Драма 1");
    strcpy(movies[1].date, "22.12.2024");
    movies[1].hour = 16;
    movies[1].minute = 00;
    movies[1].duration = 90;
    strcpy(movies[1].genre, "драма");
    movies[1].budget = 50.0;

    strcpy(movies[2].title, "Экшн-фильм 2");
    strcpy(movies[2].date, "23.12.2024");
    movies[2].hour = 17;
    movies[2].minute = 45;
    movies[2].duration = 140;
    strcpy(movies[2].genre, "боевик");
    movies[2].budget = 150.0;

    strcpy(movies[3].title, "Комедия 1");
    strcpy(movies[3].date, "22.12.2024");
    movies[3].hour = 11;
    movies[3].minute = 00;
    movies[3].duration = 110;
    strcpy(movies[3].genre, "комедия");
    movies[3].budget = 40.0;

    strcpy(movies[4].title, "Экшн-фильм 3");
    strcpy(movies[4].date, "23.12.2024");
    movies[4].hour = 13;
    movies[4].minute = 15;
    movies[4].duration = 100;
    strcpy(movies[4].genre, "боевик");
    movies[4].budget = 200.0;

    printf("Фильмы жанра 'боевик', идущие с 12 до 18 часов:\n");
    printf("----------------------\n");

    for (int i = 0; i < movie_count; i++) {
        if (strcmp(movies[i].genre, "боевик") == 0 && movies[i].hour >= 12 && movies[i].hour < 18) {
            print_movie(&movies[i]);
        }
    }
}