#include <stdio.h>

// find minimum element in array and return it's address
void min_in_array(int* array, int* limit, int** min) {
	*min = array;
	for (int* current = array; current < limit; current++) {
		if (*current < **min) {
			*min = current;
		}
	}
}

int main()
{
	int array[] = {12, 15, 10, 22};
//	printf("%i\n", sizeof(array)/sizeof(int));
	int arr_size = sizeof(array) / sizeof(int);	
	int* min = NULL;
	min_in_array(array, array + arr_size, &min);
	printf("%i\n", *min);

	return 0;
}
