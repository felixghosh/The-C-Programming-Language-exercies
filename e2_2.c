#include <stdio.h>

int main() {
	int i, c, lim;
	lim = 100;

	for(i = 0; (i < lim -1) * ((c = getchar()) != '\n') * (c != EOF) == 1; i++)
		printf("%d", i);

	return 0;
}
