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


if (argc < 3) {
        // Check if there are enough arguments
        printf("Not enough arguments");
        return 1;
    }
if (is_int(argv[1]) && is_int(argv[2]))
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;

    printf("%d", sum);
}
else
    printf("Arguments should only be integers!");
    
    return 0;
}
