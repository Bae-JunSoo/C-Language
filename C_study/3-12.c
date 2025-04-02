#include <stdio.h>

void main()
{
	int a, b;
	char c, d;

	a = 0x41;
	b = 0x50;

	printf("%c \n", b); //정수형 변수 b를 문자형으로 출력함

	c = a;
	printf("%c \n", c); //문자형 변수 c에 정수형 변수 a의 값을 대입함

	d = '#';
	printf("%c의 ASCII값은 %d 입니다. \n", d, d);
}    
        //문자형 변수 d를 두 가지 형태로 출력함
