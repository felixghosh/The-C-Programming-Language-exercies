#include <stdio.h>

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	int shift = p - n + 1;
	return (x & (~(~(~0 << n) << shift))) | (y << shift);
}

int main() {
	unsigned x = 215;
	unsigned y = 20;
	unsigned result = setbits(x, 4, 3, y);
	printf("%d\n", result);

	return 0;
}
