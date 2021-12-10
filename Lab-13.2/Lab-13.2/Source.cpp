#include <stdio.h>
#include <conio.h>

#define Z 6

#define SQR(x) (x)*(x)

#define MAX(y,z) ((y)>(z))?(y):(z)
#define MIN(y,z) ((y)<(z))?(y):(z)

#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)

#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

void main()
{
	int x, y, z, maxim, minim, first_arg, second_arg;
	char ch;
	do
	{
#if (1 <= Z && Z < 10) 
		puts("define maximum of two numbers");
		puts("Input 3 integer numbers");
		char s[10];
		scanf_s("%d", &x, sizeof(s));
		PRINTI(x);
		scanf_s("%d", &y, sizeof(s));
		PRINTI(y);
		scanf_s("%d", &z, sizeof(s));
		PRINTI(z);
		first_arg = SQR(x) + y + z;
		second_arg = x * y * z;
		maxim = MAX(first_arg, second_arg);
		PRINTR(maxim);
#else
		{
			puts("define minimum of two numbers");
			puts("Input 3 integer numbers");
			scanf_s("%d", &x, sizeof(s));
			PRINTI(x);
			scanf_s("%d", &y, sizeof(s));
			PRINTI(y);
			scanf_s("%d", &z, sizeof(s));
			PRINTI(z);
			first_arg = SQR(x) + SQR(y + x);
			second_arg = x * y;
			minim = MIN(first_arg, second_arg);
			PRINTR(minim);
		}
#endif
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}

