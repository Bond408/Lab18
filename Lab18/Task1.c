#include <stdio.h>
#include <locale.h>
#include <math.h>

struct point {
	float x;
	float y;
	char name;
};

typedef struct point Point;

void put_point(Point z) {

	printf("point %c (%.1f, %.1f)\n", z.name, z.x, z.y);
}

float dist(Point z, Point w) {

	float dist = sqrt(pow(z.x - w.x, 2) + pow(z.y - w.y, 2));
	printf("Расстояние между точками %c и %c составляет: %lf\n", z.name, w.name, dist);
}

float mid(Point z, Point w) {

	float mid_x = (z.x + w.x) / 2;
	float mid_y = (z.y + w.y) / 2;
	printf("Координаты середины отрезка между точками %c и %c: (%.2f; %.2f)\n", z.name, w.name, mid_x, mid_y);
}

float quarter(Point w) {

	if (w.x > 0 && w.y > 0)
		printf("Точка %c относится к 1 четверти\n", w.name);

	if (w.x < 0 && w.y > 0)
		printf("Точка %c относится ко 2 четверти\n", w.name);

	if (w.x < 0 && w.y < 0)
		printf("Точка %c относится к 3 четверти\n", w.name);

	if (w.x > 0 && w.y < 0)
		printf("Точка %c относится к 4 четверти\n", w.name);
}
int main()
{
	Point b, a, c, d;


	a = (Point){ 1.f, 2.f, 'A' };
	b.name = 'B'; b.x = 5; b.y = -3;
	printf("point %c (%.1f, %.1f)\n", b.name, b.x, b.y);

	printf("Задайте координаты точки C по x: ");
	scanf_s("%f", &c.x);
	printf("Задайте координаты точки C по y: ");
	scanf_s("%f", &c.y);
	printf("Задайте координаты точки D по x: ");
	scanf_s("%f", &d.x);
	printf("Задайте координаты точки D по y: ");
	scanf_s("%f", &d.y);

	c.name = 'C';
	put_point(c);

	d.name = 'D';
	put_point(d);

	dist(c, d);
	mid(c, d);
	quarter(d);
}