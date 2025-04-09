#include <stdio.h>

void main()
{
	// 8진수 = %o 10진수 = %d 16진수 = %x


	int a, b;
	char c[3];

	printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("값 입력 : ");
	scanf("%s", &c);

	if (a == 1)
		sscanf(c, "%d", &b);
	else if (a == 2)
		sscanf(c, "%x", &b);
	else if (a == 3)
		sscanf(c, "%o", &b);

	printf("10진수: %d \n16진수: %x \n8진수: %o \n", b, b, b);

}
