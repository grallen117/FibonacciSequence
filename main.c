/*
Robby Allen
8/27/2020
Fibonacci Sequence program. Runs the fibonacci sequence up until the number is hit
then stops the sequence.
*/
#include <stdio.h>
#include <stdlib.h>


int main() {

	int amount = 0, a = 0, b = 1, c = 0;
	printf("Enter what number you would like to run the Fibbonacci Sequence to.\n");
	scanf_s("%d", &amount);

	while (c < amount) {
		
		c = a + b;
		if (c > amount) {
			break;
		}
		printf("%d + %d = %d\n", a, b, c);
		a = b;
		b = c;
		


	}

}