#include <stdio.h>

int main() {
	int c;
	int chars[128];

	c = 0;
	for(int i = 0; i < 128; i++)
		chars[i] = 0;

	while((c = getchar()) != EOF) {
		chars[c]++;
	}

	putchar('\n');
	for(int i = 0; i < 128; i++) {
		if(chars[i] != 0){
			printf("%c ", i);
			for(int j = 0; j < chars[i]; j++)
				putchar('x');
			putchar('\n');
		}
	}
}
