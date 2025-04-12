#include <stdio.h>

void main()
{
	int a;
	char b, c[10];

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("값 입력 : ");
	scanf("%s", &c);

	b = c;

	b = "%d";
	printf("%d", b);

	b = c;
	
	b = "%x";
	printf("%x", b);

	b = c;

	b = "%o";
	printf("%o", b);
}
