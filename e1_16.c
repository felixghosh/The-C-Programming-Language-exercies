#include <stdio.h>
#define MAXLINE 50

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(){

	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while((len = getLine(line, MAXLINE)) > 0) {
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if(max > 0)
		printf("\n%d %s\n", max, longest);

	return 0;
}

int getLine(char line[], int maxline) {
	int c, i;
	for(i = 0; i < maxline-1 && (c=getchar()) != EOF && c != '\n'; i++)
	   line[i] = c;
	if(c == '\n') {
		line[i] = c;
		i++;
	} else {
		line[i] = '\0';
		while((c = getchar()) != EOF && c != '\n')
			i++;
		return i;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	for(int i = 0; from[i] != '\0'; i++)
		to[i] = from[i];
}
