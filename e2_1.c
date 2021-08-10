#include <stdio.h>
#include <limits.h>

int main() {
	printf("char: %d, short: %d, int: %u, long: %lu",(CHAR_MAX - CHAR_MIN), (SHRT_MAX - SHRT_MIN), (INT_MAX - INT_MIN), (LONG_MAX - LONG_MIN));
	return 0;
}
