#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

char s1[]= "-c";
printf("%s", argv[0] );

if (argc==2)
{
 if (strcmp(argv[0],s1)!=0)
{
  printf("uzyto opcji -c\n" );
}
else
  printf("nie uzyto opcji -c\n" );
}
else
printf("nie uzyto opcji -c\n" );


  return 0;
}
