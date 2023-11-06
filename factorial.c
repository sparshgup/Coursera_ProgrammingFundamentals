/*
 * Factorial (Iterative vs Factorial)
 */

#include<stdio.h>

long int factorial(int n)
{
    long f =1;
    int i;

    for (i=1;i<=n;i++)
        f = f * i;
    return f;
}

long int recursive_factorial(int n)
{
    if (n==1)
        return 1;
    else
        return(recursive_factorial(n-1) * n);
}

int main(void)
{
    int num = 0, i;

    printf("Factorial upto n: ");
    scanf("%d", &num);

    for (i=1;i<=num;i++)
        printf("\n%d\t %ld", i, factorial(i));

    for (i=1;i<=num;i++)
        printf("\n%d\t %ld", i, recursive_factorial(i));

    return 0;
}