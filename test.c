#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "functions.c"

int main(int argc, char* argv[])
{
	assert(sum(2, 3) == 5);
	printf("Everything is working fine. \n");
}