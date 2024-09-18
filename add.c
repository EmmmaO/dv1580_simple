#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){


if (argc < 3) {
        // Check if there are enough arguments
        printf("Not enough arguments");
        return 1;
    }
if (isdigit(*argv[1]) && isdigit(*argv[2]))
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
