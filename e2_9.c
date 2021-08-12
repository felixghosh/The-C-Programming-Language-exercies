#include <stdio.h>

/*
 *Since the expression x-1 will always toggle the rightmost 1-bit to a 0,
 *the &= operation will never equal 1 on the rightmost bit, since there will always be a 1 on one operand and a 0 on the other.
 */

int bitcount(unsigned x) {
	int b;
	for(b = 0; x != 0; x &= (x-1))
		b++;
	return b;
}

int main(){
	unsigned x = 127;
	printf("%d\n", bitcount(x));

	return 0;
}
