#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double storona(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void circle()
{
    double r, P, S;
    printf("Input Radius: ");
    scanf("%lf", &r);
    if (r <= 0) {
        printf("! Error: It's not a circle \n");
        exit(0);
    }
    S = (double)3.14 * r * r;
    P = (double)r * 2 * 3.14;
    printf(" P = %.2lf cm", P);
    printf("\n S = %.2lf cm", S);
    printf("\n");
}

void triangle()
{
    double x1, x2, x3, y1, y2, y3;
    double a, b, c;
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    printf("Enter x3: ");
    scanf("%lf", &x3);
    printf("Enter y3: ");
    scanf("%lf", &y3);

    a = storona(x1, y1, x2, y2);
    b = storona(x1, y1, x3, y3);
    c = storona(x2, y2, x3, y3);

    double P = (a + b + c);
    double p = P / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    if (b + c >= a && a + c >= b && a + b >= c && a > 0 && b > 0 && c > 0) { //
        printf("\nP=%.3f cm\nS=%.3f cm\n", P, S);
    } else
        printf("! Error: Wrong values\n");
}

int main()
{
    int n;

    printf("Choose type:\n1.Circle\n2.Triangle\n");

    scanf("%d", &n);
    switch (n) {
    case 1:
        circle();
        break;
    case 2:
        triangle();
        break;
    default:
        printf("! Error");
    }
}
