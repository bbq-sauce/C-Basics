
#include <stdio.h>

void pointer()
{
	int var = 20;


	int* ptr;

	
	ptr = &var;

	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}

int main()
{
	pointer();
	return 0;
}
