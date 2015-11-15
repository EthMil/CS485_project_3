#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct NewBuiltIn {
  char CommandName[64];   /* Name of the Built-in command users can type */
  char FunctionName[64];  /* Name of the function in the code */
  char AnalyzerName[64];  /* Name of an analyzer function to call on every command */
};

/* Description of a pluggin's built-in command functions and command to type */
struct NewBuiltIn pluggin_method = { "rand", "rand", "" };

 

int rand ()
{
  int number;
  /* initialize random seed: */
  srand ( time(NULL) );
  /* Generate a random number: */
  number = rand() % 10 + 1;
  printf("%d", number);
  return 0;
}
