#include<stdio.h>
int main()
{
    double A, B, C, pi = 3.14159;
    double Triangle, Circle, Trapezium, Square, Rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    Triangle = (A * C) / 2;
    Circle = pi * (C * C);
    Trapezium = ((A + B) * C) / 2;
    Square = B * B;
    Rectangle = A * B;

    printf("TRIANGULO: %.3lf\n",Triangle);
    printf("CIRCULO: %.3lf\n", Circle);
    printf("TRAPEZIO: %.3lf\n", Trapezium);
    printf("QUADRADO: %.3lf\n", Square);
    printf("RETANGULO: %.3lf\n", Rectangle);



    return 0;
}
