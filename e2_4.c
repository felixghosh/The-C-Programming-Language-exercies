#include <stdio.h>

void squeeze(char s1[], char s2[]) {
	int i, j;

	for(i = j = 0; s1[i] != '\0'; i++)
		if(s1[i] != s2[i])
			s1[j++] = s1[i];
	s1[j] = '\0';
}

int main() {
	char s1[] = "hello world";
	char s2[] = "hrrio rrrrr";
	squeeze(s1,s2);
	printf("%s\n",s1);

	return 0;
}
