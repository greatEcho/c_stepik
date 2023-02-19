#include <stdio.h>

// Fill an array with Fibonacci numbers

void array_fib(int* array, int* limit)
{
	for (int* current = array; current < limit; current++) {
		if (current == array || current - 1 == array) {
			*current = 1;
		}
		else {
			*current = *(current - 1) + *(current - 2);
		}
	}
}

void print_arr(int* array, int* limit)
{
	for (int* current = array; current < limit; current++) {
		printf("%i ", *current);
	}
	printf("\n");
}


int main()
{
	int size1 = 5;
	int my_arr1[size1];
	array_fib(my_arr1, my_arr1 + size1);

	int size2 = 0;
	int my_arr2[size2];
	array_fib(my_arr2, my_arr2 + size2);

	int size3 = 10;
	int my_arr3[size3];
	array_fib(my_arr3, my_arr3 + size3);
	
	// print
	print_arr(my_arr1, my_arr1 + size1);
	print_arr(my_arr2, my_arr2 + size2);
	print_arr(my_arr3, my_arr3 + size3);

	return 0;
}


