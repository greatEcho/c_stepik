#include <stdio.h>

// function to revert array

void reverse(int* arr, int size)
{
	int bucket;
	for (int i = 0; i < size / 2; i++) {
		bucket = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = bucket;
	}
}

void print_array(int* array, int* limit)
{
	for (int* current = array; current < limit; current++) {
		printf("%i ", *current);
	}
	printf("\n");
}


int main()
{
	// declare & initialize
	int my_arr1[] = {10, 20, 30, 40};
	int my_arr2[] = {};
	int my_arr3[] = {10};
	int my_arr4[] = {10, 20, 30};

	// revert 
	reverse(my_arr1, 4);
	reverse(my_arr2, 0);
	reverse(my_arr3, 1);
	reverse(my_arr4, 3);

	// print
	print_array(my_arr1, my_arr1 + 4);
	print_array(my_arr2, my_arr2 + 0);
	print_array(my_arr3, my_arr3 + 1);
	print_array(my_arr4, my_arr4 + 3);

	return 0;
}


