#include <stdio.h>
int main(int argc, char *argv[])
{
	// input a number
	// //check if even or odd
	//
	
	int number;

	printf("enter a number: ");
	scanf("%d", &number);

	if (number%2 == 0){
		printf("Number is even\n");
	}else {
		printf("Number is odd\n");
	}
	return 0;
}
