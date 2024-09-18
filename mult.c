#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
  if (argc < 3)
  {
    printf("Too few arguments!");
    return 1;
  }
  
  float num1, num2;

  if(isdigit(*argv[1]) && isdigit(*argv[2]))
    {
      num1 = atof(argv[1]);
      num2 = atof(argv[2]);

      float prod = num1*num2;

      printf("%f", prod);
    }
    else
      printf("Numbers must be real!");
  return 0;
}
