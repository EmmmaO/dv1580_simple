#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if(argc < 3)
  {
    printf("Too few arguments provided!");
    return 1;
  }
    

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int diff = num1 - num2;

    printf("%d", diff);

  return 0;
}
