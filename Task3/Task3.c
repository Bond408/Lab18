#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_MOVIES 10
#define GENRE_LENGTH 20
#define TITLE_LENGTH 50

typedef struct {
    char title[TITLE_LENGTH];       // �������� ������
    char date[11];                  // ���� ������
    int hour;                       // ��� ������ ������
    int minute;                     // ������ ������ ������
    int duration;                   // ����������������� ������
    char genre[GENRE_LENGTH];       // ���� ������
    double budget;                  // ������ ������
} Movie;

void print_movie(const Movie* movie) {
    printf("��������: %s\n", movie->title);
    printf("����: %s\n", movie->date);
    printf("�����: %02d:%02d\n", movie->hour, movie->minute);
    printf("�����������������: %d ���\n", movie->duration);
    printf("����: %s\n", movie->genre);
    printf("������: %.2f ��� $\n", movie->budget);
    printf("----------------------\n");
}

int main() {
    setlocale(LC_ALL, "RUS");
    Movie movies[MAX_MOVIES];
    int movie_count = 5; // ���������� ������� (����� ���������)

    strcpy(movies[0].title, "����-����� 1");
    strcpy(movies[0].date, "22.12.2024");
    movies[0].hour = 14;
    movies[0].minute = 30;
    movies[0].duration = 120;
    strcpy(movies[0].genre, "������");
    movies[0].budget = 100.0;

    strcpy(movies[1].title, "����� 1");
    strcpy(movies[1].date, "22.12.2024");
    movies[1].hour = 16;
    movies[1].minute = 00;
    movies[1].duration = 90;
    strcpy(movies[1].genre, "�����");
    movies[1].budget = 50.0;

    strcpy(movies[2].title, "����-����� 2");
    strcpy(movies[2].date, "23.12.2024");
    movies[2].hour = 17;
    movies[2].minute = 45;
    movies[2].duration = 140;
    strcpy(movies[2].genre, "������");
    movies[2].budget = 150.0;

    strcpy(movies[3].title, "������� 1");
    strcpy(movies[3].date, "22.12.2024");
    movies[3].hour = 11;
    movies[3].minute = 00;
    movies[3].duration = 110;
    strcpy(movies[3].genre, "�������");
    movies[3].budget = 40.0;

    strcpy(movies[4].title, "����-����� 3");
    strcpy(movies[4].date, "23.12.2024");
    movies[4].hour = 13;
    movies[4].minute = 15;
    movies[4].duration = 100;
    strcpy(movies[4].genre, "������");
    movies[4].budget = 200.0;

    printf("������ ����� '������', ������ � 12 �� 18 �����:\n");
    printf("----------------------\n");

    for (int i = 0; i < movie_count; i++) {
        if (strcmp(movies[i].genre, "������") == 0 && movies[i].hour >= 12 && movies[i].hour < 18) {
            print_movie(&movies[i]);
        }
    }
}