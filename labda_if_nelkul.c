#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include <stdio.h>

//tombok feltoltése irányokkal (1,-1)
// az irányok értéke mindenhol 1, kivéve az első és az utolsó előtti pontot ahol -1.
void feltolt(int tomb[],int max)
{
	for(int i=1; i<max; i++)
 	{
 		tomb[i]=1;
 	} 
 	tomb[1]=-1; 
 	tomb[max-1]=-1;
}

int main(){

	//új ablak 
	WINDOW	*ablak;
	ablak = initscr();

	noecho();
    cbreak();
    nodelay (ablak,true);
	
	int mx = 0; //az ablak szélessége.
	int my = 0;	//az ablak magassága.

	int x = 1;	//y kezdő koordinátája.
	int y = 1; 	//y kezdő koordinátája.

	getmaxyx(ablak,my,mx);
	
	//mx = mx/2;//fele szélesség.
	//my = my/2;//fele magasság.

	int irany_x[mx];
	int irany_y[my];

	feltolt(irany_y,my);
	feltolt(irany_x,mx);

	// x és y mozgási sebessége/iránya.
	int deltax = 1;
	int deltay = 1;

	for (;;) //busy_loop
	{
		// x koordináta növelése 1-el.
		x += deltax;
		// y koordináta növelése 1-el.
		y += deltay;

		// x mozgási irányának beállítása.
		deltax *= irany_x[x];
		// y mozgási irányának beállítása.
		deltay *= irany_y[y]; 
		
		refresh(); 
		clear(); // előzőleg rajzolt "labdák" törlése.
		usleep(50000); // a "labda" sebessége.(minél kisebb annál gyorsabb).
		mvprintw(y ,x,"x:%dy:%d",x,y); // kiírja az aktuális koordinátákat.
			
	}

	return 0;
}
