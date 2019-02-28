#include <stdio.h>
	
void csere(int*,int*);

int main(){

int a = 5;
int b = 12;

csere(&a,&b);

return 0;
}

void csere(int *a,int *b)
{
	printf("a = %d\nb = %d\n",*a,*b);
	*a = *a + *b; //a(17) = 12 + 5 
	*b = *a - *b; //b(12) = 17 - 5
	*a = *a - *b; //a(5) = 17 - 12
	printf("\na = %d\nb = %d\n", *a,*b);
} 