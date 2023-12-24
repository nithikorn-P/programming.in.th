#include <stdio.h>

const double PI = 3.141592653589793;

int main()
{
    double r;
    double Euclidean_area, Taxicab_area;

    scanf("%lf", &r);
    Euclidean_area = PI * r * r;
    Taxicab_area = 2.0f * r * r;
    printf("%.6lf\n%.6lf\n", Euclidean_area, Taxicab_area);

    return (0);
}