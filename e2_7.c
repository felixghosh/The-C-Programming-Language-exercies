#include <stdio.h>

unsigned invert(unsigned x, int p, int n) {
	int shift = p - n + 1;
	return x ^ (~(~0 << n) << shift);
}

int main() {
	unsigned x = 212;
	unsigned result = invert (x, 4, 3);
	printf("%d\n", result);
	return 0;
}
