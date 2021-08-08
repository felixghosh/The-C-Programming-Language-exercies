#include <stdio.h>
#define IN 1
#define OUT 0

int main() {
	int c, count, nbrOfSpaces, state;

	count = state = nbrOfSpaces = c = 0;
	while((c = getchar()) != EOF) {
		count++;
		if(state == IN) {
			if(c == ' ')
				nbrOfSpaces++;
			else {
				//printf("%d %d", (nbrOfSpaces / 4), (nbrOfSpaces % 4));
				for(int i = 0; i < (nbrOfSpaces / 4); i++)
					putchar('\t');
				for(int j = 0; j < (nbrOfSpaces % 4); j++)
					putchar(' ');
				state = OUT;
				putchar(c);
				nbrOfSpaces = 0;
			}
		}
		else {
	   		if(c == ' '){
				state = IN;
				nbrOfSpaces++;
			}
			else if(c == '\n'){
				count = 0;
				putchar(c);	
			}
			else {
				putchar(c);
			}
		}

	}

	return 0;
}
