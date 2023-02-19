#include <stdio.h>

int is_whitespace(char c) { return c == ' ' || c == '\t' || c == '\n'; }


int main(void)
{
	char c = 0x7E;
	printf("%c\n", c);

	char str[] = {72, 105, 0};
	printf(str);

	return 0;
}
