#include <stdio.h>

void main()
{
	char a, b, c;

	a = 'A';
	printf(" %c \n", a);   //문자형 변수 a를 문자형과 정수형으로 출력함
	printf(" %d \n", a);

	b='a';
	c = b + 5;
	printf(" %c \n", b);   //문자형 변수 b에 5를 더하여 문자형 변수 c에 대입함
	printf(" %c \n", c);

	c = 90;
	printf(" %c \n", c);   //문자현 변수 c에 90을 대입함 
}
