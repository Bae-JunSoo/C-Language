#include <stdio.h>

void main()
{
	// 8���� = %o 10���� = %d 16���� = %x


	int a, b;
	char c[3];

	printf("�Է����� ���� <1>10 <2>16 <3>8 : ");
	scanf("%d", &a);

	printf("�� �Է� : ");
	scanf("%s", &c);

	if (a == 1)
		sscanf(c, "%d", &b);
	else if (a == 2)
		sscanf(c, "%x", &b);
	else if (a == 3)
		sscanf(c, "%o", &b);

	printf("10����: %d \n16����: %x \n8����: %o \n", b, b, b);

}
