#include "passgen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
  int length;

  getLength(&length);

  char * string = malloc(sizeof(char) * length);

  if(string == NULL)
  {
    printf("malloc fail");
    return(0);
  }

  generateString(length, string);

  printString(string);

  free(string);

  return(0);
}
