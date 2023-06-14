#include <stdio.h>
#include <stdlib.h>

/**		
* _atoi - converts a string to an integer		
* @s: string to be converted		
* Return: the int converted from the string		
*/
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error: Invalid number of arguments\n");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 == 0 || num2 == 0) {
        printf("Error: Invalid input\n");
        return 1;
    }

    int result = num1 * num2;
    printf("Result: %d\n", result);

    return 0;
}
