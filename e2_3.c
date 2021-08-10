#include <stdio.h>

int atoi(char s[]) {
	int i, n;

	n = 0;
	for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
		n = 10 * n + (s[i] - '0');
	return n;
}

int htoi(char s[]) {
	int i, n;

	n = 0;
	for(i = 0; (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); i++) {
		n = 16 * n;
		if(s[i] >= '0' && s[i] <= '9')
			n += (s[i] - '0');
		else if(s[i] >= 'a' && s[i] <= 'z') 
			n += 10 + (s[i] - 'a');
		
		else
			n += 10 + (s[i] - 'A');
	}
	return n;
}

int main() {
	char s[] = "b2";

	int n = htoi(s);
	printf("%d\n", n);

	return 0;
}
