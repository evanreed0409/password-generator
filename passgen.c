#include "passgen.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void getLength(int * length)
{
  printf("String length: ");
  scanf("%d", &*length);
}

void generateString(int length, char string[])
{
  const char charBank[73] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIIOPASDFGHJKLZXCVBNM1234567890!@#$%^&*()";
  int charNum;

  srand(time(NULL));

  for(int i = 0; i < length; i++)
  {
    charNum = rand() % 72;

    string[i] = charBank[charNum];
  }

  return;
}

void printString(char string[])
{
  printf("Generated String: %s\n", string);

  return;
}
