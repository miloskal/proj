// treca verzija


#include <stdio.h>
#include <stdlib.h>


static void
error_fatal(char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}


int
main(int argc, char* argv[])
{
  printf("Hello World!\n");
  
  return 0;
}
