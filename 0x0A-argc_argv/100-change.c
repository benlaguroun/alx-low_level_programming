#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints the minimum coins
 * make change for amont money
 * @argc:number of commandline
 * @argv:pointer to an array of command line
 * return:0 (success).
 */

int main(int argc, char *argv[]) 
{
if (argc != 2) 
{
printf("Error\n");
return 1;
}
 int cents = atoi(argv[1]);
 int coins[] = {25, 10, 5, 2, 1};
 int numCoins = sizeof(coins) / sizeof(coins[0]);
 int minCoins = 0;
 for (int i = 0; i < numCoins; i++) 
{
minCoins += cents / coins[i];
cents %= coins[i];
}
printf("%d\n", (cents < 0 ? 0 : minCoins));
return 0;
}
