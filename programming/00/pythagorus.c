#include <stdio.h>

double SqrtNewton(double n)
{
    double root, guess = n / 2;

    do
    {
        root = guess;
        guess = (guess + (n/guess)) / 2;
    } while (root != guess);
    
    return (guess);
}

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);
    printf("%lf\n", SqrtNewton((a*a) + (b*b)));
    
    return (0);
}