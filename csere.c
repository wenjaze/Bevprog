#include <stdio.h>

int main()
{
	int a = 7;
	int b = 14;
	printf("a:%d\nb:%d",a,b);
	printf("\n------csere-------")

	a = a+b; // 7+14 = 21;
	b = a-b; // 21-14 = 7;
	a = a-b; // 21-7 = 14;

	printf("a:%d\nb:%d",a,b);

	return 0;
}
