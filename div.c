#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){

if (argc < 3)
{
  printf("-ERROR-\n");
  return 1;
}

int check = atoi(argv[2]);
if (check == 0)
{
  printf("DIV ZERO NOT ALLOWED!\n");
  return -1;
}

if(isdigit(*argv[1]) && isdigit(*argv[2]))
{
  float num1 = atof(argv[1]);
  float num2 = atof(argv[2]);
  float qout = num1 / num2;
  printf("%.4f", qout);
}
  

else
printf("-ERROR-\n");

  return 0;
}
