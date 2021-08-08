#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void reverse(char line[], int length);

int main() {
	int length;
	char line[MAXLINE];

	while((length = getLine(line, MAXLINE)) > 0){
		reverse(line, length);
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
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void reverse(char line[], int length) {
	char temp[length];
	for(int i = 0; i < length; i++) {
		temp[i] = line[i];
	}
	for(int i = 0; i < length; i++) {
		line[i] = temp[(length-1) - i];
	}
}
