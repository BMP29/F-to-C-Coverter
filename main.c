#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 5;

    celsius = lower;

    printf("---------------------------------\n Celsius to Fahrenheit Converter\n---------------------------------\n");
    while(celsius <= upper)
    {
        fahr = 32 + (celsius * 9/5);
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

    printf("Choose the temperature in fahrenheit to convert to celsius: ");
    scanf("%f", &fahr);
    celsius = (5.0/9.0) * (fahr - 32);
    printf("%3.0f fahrenheit is %6.1f celcius: \n\n", fahr, celsius);

    printf("Press any key to quit   ");
    getchar();

    return 0;
}
