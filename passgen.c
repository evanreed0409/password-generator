#include "passgen.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"

int getLength()
{
  int length;

  printf("String length: ");
  scanf("%d", &length);

  return(length);
}

void generateString(int length, char string[])
{
  const char * characters[72] = ['q', 'w', 'e', 'r', 't', 'u', 'i', 'o', 'p', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')']
  int charNum;

  srand(time(NULL));

  for(int i = 0; i < length; i++)
  {
    charNum = rand() % 72;

    string[i] = characters[character];
  }

  return;
}

void printString(char string[])
{
  printf("Generated String: %s", string);

  return;
}
