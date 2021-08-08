#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);

int main() {
	int length;
	char line[MAXLINE];

	while((length = getLine(line, MAXLINE)) > 0){
		if(length > 1)
			printf("%d %s\n", length, line);
	}

	return 0;
}

int getLine(char line[], int maxline) {
	int c, i;
	
	for(i = 0; (c = getchar()) != EOF && c != '\n' && i < maxline -1; i++) {
		if(c == ' ' || c == '\t') {
			line[i] = c;
			i++;
			while((c = getchar()) == ' ' || c == '\t'){
				;
			}
		}
		line[i] = c;
	}
	if(c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}
