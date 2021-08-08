#include <stdio.h>

float convertToCelsius(float fahr);

int main() {
	float celsius, fahr;
	printf("Far    Cel\n");

	for(fahr = 0; fahr <= 300; fahr = fahr + 20) {
		celsius = convertToCelsius(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
	}

	return 0;
}

float convertToCelsius(float fahr) {
	float celsius;
	celsius = (5.0/9.0) * (fahr - 32.0);
	return celsius;
}
