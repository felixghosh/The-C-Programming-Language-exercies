#include <stdio.h>

int lower(int c) {
	c = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
	return c;
}

int main() {
	int c = 'A';
	printf("%c\n", lower(c));

	return 0;
}
