#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){


if (argc < 3) {
        // Check if there are enough arguments
        printf("Not enough arguments");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;

    printf("%d", sum);
    
    return 0;
}
