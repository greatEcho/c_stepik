#include <stdio.h>

// Passing array as argument in function

void print_int(int arg) { printf("%d\n", arg); }

void print_arr(int* array, int size) 
{
	for (int i = 0; i < size; i++) {
		print_int(array[i]);
	}
}

void print_arr_limit(int* array, int* limit)
{
	for (int* current = array; current < limit; current++) {
		print_int(*current);
	}
}


int main(int argc, char* argv[])
{
	int arr_size = 5;	
	int myarray[] = {1, 2, 3, 4, 5};
	print_arr(myarray, arr_size);

	print_arr_limit(myarray, myarray + arr_size);


	return 0;
}
	
