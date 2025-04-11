#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	//Case 1: trying to write to unknown memory location
	*ptr = 10;
	printf("Value of ptr = %d\n", *ptr);

	//Case 2: freeing an uninitialized pointer
	//free(ptr);

	return 0;
}
