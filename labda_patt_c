#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void
move(int x, int y){
int i;
for(i=0; i<y; i++) printf("\n");
for(i=0; i<x; i++) printf(" ");
}

int main(){

int e=1, m_e=-1,i,x=10,y=10;
int height[30], width[90];

	for(i=1; i<23; i++) 
	{
		height[i]=1;
		height[1]=-1;
		height[22]=-1;
	}
	for(i=1; i<80; i++)
	{
		width[i]=1;
		width[1]=-1;
		width[79]=-1;

	while(1)
	{
		for(i=0; i<70; i++){
			printf("-"); 
			printf("x=%d", x); 
			printf("y=%d", y);
		}
		move(x,y);
		printf("X\n");
		x+=e; y+=m_e;
		e*=width[x]; m_e*=height[y];
		usleep (50000);
		system("clear");
	}

	return 0;
}
