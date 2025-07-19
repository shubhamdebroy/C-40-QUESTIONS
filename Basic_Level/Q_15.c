#include <stdio.h>
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
int main() {
    float cel, fah;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel);
    fah = celsius_to_fahrenheit(cel);
    printf("Temperature in Fahrenheit: %.2f\n", fah);
    return 0;
}