#include <stdio.h>
#include <unistd.h>

int
main (void)
{
  int i, bit;
  unsigned char b;

  while (read (0, (void *) &b, sizeof (unsigned char)))
    {
      if (b == 0x0a)
        continue;
      for (i = 0; i < 8; ++i)
        {
          bit = b & 0x80;
          if ((bit >> 7) == 1)
            printf ("1");
          else
            printf ("0");
          b <<= 1;
        }
    }
}
