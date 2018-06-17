#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int x, y;
		printf("enter 2 numbers:\n\n");
		scanf("%d %d", &x, &y);
		if (x == y) printf("numbers are equal\n\n");
		else
		{
			if (x > y) printf("%d, %d\n\n", x, y);
			else printf("%d, %d\n\n", y, x);
		}
	}
	break;
	case 2:
	case 3:
	{
		int a, b, c, d, e;
		a = 2 + rand() % 4;
		b = 2 + rand() % 4;
		c = 2 + rand() % 4;
		d = 2 + rand() % 4;
		e = 2 + rand() % 4;
		printf("%d, %d, %d, %d, %d\n\n", a, b, c, d, e);

		int x = (a + b + c + d + e) / 5;
		if (x >= 4) printf("%d - allowed\n\n", x);
		else printf("%d - not allowed\n\n", x);
	}
	break;
	case 4:
	{
		cin.get();
		float a, b, x;
		char Action;
	next:
		printf("enter your example with 2 numbers and type a math operation:\t+ - * / ^:\n");
		scanf("%f %c %f", &a, &Action, &b);

		switch (Action)
		{
		case '+':
			printf("%.2f\n\n", a + b);
			break;
		case '-':
			printf("%.2f\n\n", a - b);
			break;
		case '*':
			printf("%.2f\n\n", a * b);
			break;
		case '/':
			printf("%.2f\n\n", x = a/b);
			break;
		case '^':
			printf("%.0f\n\n", x = pow(a,b));
			break;
		default:
			printf("no such operation type\n\n");
		}
		goto next;
	}
	break;
	case 5:
	{

	}
	break;
	case 6:
	{
		double x=0, y=0;
		printf("enter a number:\n\n");
		scanf("%lf", &x);
		int i;
		for(i=0; i<8; i++)
		{
			y = pow(x, i);
			printf("%.0lf ^ %d = %.0lf\n", x, i, y);
		}
	}
	break;
	case 7:
	{
		int x, y, z;
		printf("enter number of people in each of 3 buses:\n");
		scanf("%d %d %d", &x, &y, &z);
		if ((x + y + z) % 3 == 0)
		{
			int p = (x + y + z) / 3;
			int n = (abs(p - x) + abs(p - y) + abs(p - z)) / 2;
			printf("minimal number of people to move: %d\n\n", n);
		}
		else printf("this amount of people cannot be divided equally");
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}