#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

int count;
printf("This program was called with \"%s\".\n",argv[0] );
if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }


  return EXIT_SUCCESS;
}
