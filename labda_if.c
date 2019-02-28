#include <unistd.h>
#include <stdlib.h>
#include <curses.h>
#include <stdio.h>

int
main ( void )
{
    WINDOW *ablak;
    ablak = initscr ();
    // noecho();
    // cbreak();
    // nodelay (ablak,true);

    int x = 0;
    int y = 0;

    int deltax = 1;
    int deltay = 1;

    int keretx = 0;
    int kerety = 0;

    for ( ;; ) 
    {

        getmaxyx( ablak, kerety,keretx);
        mvprintw ( y, x, "x:%dy:%d",x,y );
        refresh ();
        usleep ( 50000 );
        clear();

        x = x + deltax;
        y = y + deltay;

        if (x >= keretx - 1)
        {
            deltax = deltax * - 1;
        }
        if (y >= kerety - 1)
        {
            deltay = deltay * - 1;
        }
        if  (y <= 0)
        {
            deltay = deltay * -1;
        }
        if (x <= 0)
        {
            deltax = deltax * -1;
        }

        
            
    }

    return 0;
}
