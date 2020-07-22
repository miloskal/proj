// sesta verzija
// prva ba bransi newbranch

#include <stdio.h>
#include <stdlib.h>

EVO SINTAKSNE GRESKE

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
  printf("Numbers: ");
  print_first_5();

  exit(EXIT_SUCCESS);
}
