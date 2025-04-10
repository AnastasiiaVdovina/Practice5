#include <stdio.h>

int main(){
	int uninitialized_var;
	printf("Uninitialized variable int = %d\n", uninitialized_var);
	
	int result;
	result = uninitialized_var + 5;
	printf("This variable + 5 = %d\n", result);
	
	return 0;
}
