#include <stdio.h>

void main()
{
	int a;
	float b;

	a = 123.45;    /* 정수형 변수에 실수를 대입함. (X) */
	b = 200;       /* 실수형 변수에 정수를 대입함. (X) */

	printf("a의 값 : %d \n", a);
	printf("b의 값 : %f \n", b);
}
