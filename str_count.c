#include <stdio.h>

// count the length of given string
int is_whitespace(char c) { return c == ' ' || c == '\t' || c == '\n'; }

int string_count(char* str)
{
	int length = 0;
	for (char* current = str; *current != '\0'; current++) {
		length++;
	}
	return length;
}

int string_words(char* str)
{
	int word_count = 0, in_word = 0;
	for (char* current = str; *current != '\0'; current++) {
		if ( is_whitespace(*current) ) {
			in_word = 0;
		}
		else {
			if ( !in_word ) {
				word_count++;
			}
		in_word = 1;
		}
	}
	return word_count;
}


int main(int argc, char* argv[])
{
	if (argc < 2) { return 1; }

	printf( "%s\n",  argv[1] );
	char str1[] = "Hey";
	printf("%i\n%i\n", string_count(argv[1]), string_words(argv[1]) );

	return 0;
}
	
