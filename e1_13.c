#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c;
	c = 0;

	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\t' || c == '\n') {
			putchar('\n');
		} else
			putchar('x');
	}
}
