// Accurate for finding the decimal places up to the 14th decimal places.

#include <stdio.h>
#include <math.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n = 2, decimals;
    double sum = 0.0, term;
    printf("Enter the nth term up to which you want to see the value of Pi: ");
    scanf("%d", &decimals);

    for (int k = 0; k <= n; k++)
    {
        double fact_i_4 = pow((double)factorial(k), 4);
        double pow_396 = pow(396.0, 4 * k);
        double numerator = factorial(4 * k) * (1103 + 26390 * k);
        double denominator = fact_i_4 * pow_396;
        term = numerator / denominator;
        sum += term;
    }

    double factor = 2.0 * sqrt(2.0) / 9801.0;
    double pi = 1.0 / (factor * sum);
    printf("Pi = %.*lf\n", decimals, pi);
    return 0;
}
