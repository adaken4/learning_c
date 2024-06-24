#include <stdio.h>

int main() {
    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum;
    sum = (float)a + b + (float)c;
    printf("%f\n", sum);
    return 0;
}