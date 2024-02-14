#include<stdio.h>
#include<stdlib.h>

extern int sum(int numOne_, int numTwo_)
{
	return numOne_ + numTwo_;
}

int main(int argc, char* argv[])
{
	printf("The first number is : %s\n", argv[1]);
	printf("The second number is : %s\n", argv[2]);

	int numOne = atoi(argv[1]);
	int numTwo = atoi(argv[2]);

	printf("The result of the sum of the given numbers is %d\n", sum(numOne, numTwo));

}