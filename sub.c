#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_int(const char* str)
{
    if (*str == '-')
    {
        str++;
    }
    
    if(isdigit(*str))
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]){

  if(argc < 3)
  {
    printf("-ERROR-\n");
    return 1;
  }
    
  if(is_int(argv[1]) && is_int(argv[2]))
  {
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int diff = num1 - num2;

    printf("%d", diff);
  }
  else
  printf("-ERROR-\n");

  return 0;
}
