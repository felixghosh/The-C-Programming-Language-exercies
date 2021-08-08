#include <stdio.h>

int main() {
	int c, count;

	count = 0;
	while((c = getchar()) != EOF) {
		if(c == '\n')
			count = 0;
		else if(c == '\t') {
			int spaces = 5 - (count % 4);
			for(int i = 1; i < spaces; i++){
				putchar(' ');
				count++;
			}
		}
		else{
			count++;
			putchar(c);	
		}
	}
	
	return 0;
}
