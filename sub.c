#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){

  if(argc < 3)
  {
    printf("Too few arguments provided!");
    return 1;
  }
    
  if(isdigit(*argv[1] && isdigit(*argv[2])))
  {
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int diff = num1 - num2;

    printf("%d", diff);
  }
  else
  printf("NOT INTEGERS!");

  return 0;
}
