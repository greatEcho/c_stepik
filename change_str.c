#include <stdio.h>

// changeble string and not

int main()
{
	char str[] = "Hello";
	printf( str );
	str[0] = 'A';
	printf( str );

	// can't change
	char* str2 = "Hello";
	printf( str2 );
	// str2[0] = 'A'; // ERROR!!!
	printf( str2 );

	return 0;
}
