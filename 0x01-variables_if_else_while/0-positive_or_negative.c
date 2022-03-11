#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - assigns a random number to int n
 * it executes the program, and prints n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0){
		printf("%dis positive \n",n);
	}
	else if(n==0){
		printf("%dis zero \n",n);
	}
	else {
		printf("%dis negative\n",n);
	}
	return (0);
}
