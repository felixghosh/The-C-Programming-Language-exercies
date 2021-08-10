#include <stdio.h>

int any(char s1[], char s2[]) {
	for(int i = 0; s1[i] != '\0'; i++)
		if(s1[i] == s2[i])
			return i;
	return -1;
}

int main() {
	char s1[] = "hejsan";
	char s2[] = "prksan";
	printf("%d\n", any(s1,s2));

	return 0;
}
