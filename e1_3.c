#include <stdio.h>

main(){
    float celsius, fahr;
    int lower, step, upper;

    lower = 0;
    step = 20;
    upper = 300;

    fahr = lower;

    printf("Far    Cel\n");

    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
}

