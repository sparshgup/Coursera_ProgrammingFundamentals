/*
 * Program for squares and cubes
 */

#include<stdio.h>

double square(double);
double cube (double);

int main(void)
{
    int num = 0, i, j;

    printf("I want squares and cubes from 1 to n. "
           "The value of n is: ");
    scanf("%d", &num);

    printf("\n Squares and cubes by interval of 0.1\n");

    for (i=1; i <= num; i++)
        for (j=0; j<10; j++)
            printf("\n%lf\t%lf\t%lf",
                   i+j/10.0,
                   square(i+j/10.0),
                   cube(i+j/10.0));

    printf("\n\n");
    return 0;
}

double square(double x)
{
    return (x*x);
}

double cube(double x)
{
    return (x*x*x);
}