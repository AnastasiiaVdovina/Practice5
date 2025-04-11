#include <stdio.h>
#include <stdlib.h>

int main(){
	int uninitialized_var;
	printf("Uninitialized variable int = %d\n", uninitialized_var);
	
	int result;
	result = uninitialized_var + 5;
	printf("This variable + 5 = %d\n", result);

	int *uninitialized_ptr;
	int result2;

	uninitialized_ptr = (int *)malloc(sizeof(int));
	if(!uninitialized_ptr){
		perror("Failed to allocate memory");
		return 1;
	}

	printf("Uninitialized ptr int = %d\n", *uninitialized_ptr);

	result2 = *uninitialized_ptr + 5;
	printf("Result2 = %d\n", result2);
	free(uninitialized_ptr);

	return 0;
}
