#include <stdio.h>


//NOTE! This only works for 8 bit long numbers. Too tired atm to implement full generality.
unsigned rotx(unsigned x, int n) {
	return (x >> n) | ((x & ~(~0 << n))<< (8 - n));
}

int main() {
	unsigned x = 178;
	unsigned result = rotx(x, 3);
	printf("%d\n", result);

	return 0;
}
