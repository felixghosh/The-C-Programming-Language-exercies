#include <stdio.h>
#define MAXLINE 1000
int getLine(char line[], int maxline);

int main() {
	int length;
	char line[MAXLINE];
	
	while((length = getLine(line, MAXLINE)) > 0) {
		if(length > 80)
			printf("%d %s\n", length, line);
	}

	return 0;
}

int getLine(char line[], int maxline) {
	int c, i;

	for(i = 0; (c = getchar()) != EOF && c != '\n' && i < maxline-1; i++) {
		line[i] = c;
	}
	if(c == '\n') {
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return i;
}
