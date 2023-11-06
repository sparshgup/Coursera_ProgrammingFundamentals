/*
 * Arrays
 */

#include <stdio.h>

int main(void)
{
    const int SIZE = 5;

    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    int i;

    printf("\nMy Grades are:\n");

    for (i=0; i<SIZE; i++)
        printf("%d\t", grades[i]);

    printf("\n\n");

    for (i=0; i<SIZE; i++)
        sum = sum + grades[i];

    printf("My average is %.2f\n", sum/SIZE);
}