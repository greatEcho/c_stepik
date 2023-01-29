#include <stdio.h>


// find first element which is appropriate for condition

int predicate(int x)
{
	if (x == 10) {
		return 1;
	}
	else {
		return 0;
	}
}

int array_contains(int* array, int* limit, int** position)
{
	if (limit <= array) { return 0; }
	for (int* current = array; current < limit; current++) {
		if (predicate(*current)) {
			*position = current;
			return 1;
		}
	}
	return 0;
}



int main(void) 
{
	int myarray1[] = {1, 2, 3, 11};
	int myarray2[] = {0, 0, 10, 0};
	int* position = NULL;
	printf("%d\n", position);
	array_contains(myarray1, (myarray2+sizeof(myarray1)/sizeof(int)), &position);
	printf("%d\n", position);

	return 0;
}
	


