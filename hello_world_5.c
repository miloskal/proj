// peta verzija


#include <stdio.h>
#include <stdlib.h>


static void
error_fatal(char *msg)
{
	perror(msg);
	exit(EXIT_FAILURE);
}

static void
print_first_5(void)
{
	for(int i=0; i<5; i++)
		printf("%d  ", i);
	
	printf("\n");
}

int
main(int argc, char* argv[])
{
  printf("Hello World!\n");
  
  exit(EXIT_SUCCESS);
}
