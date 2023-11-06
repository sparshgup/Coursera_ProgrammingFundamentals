//
// Created on 17/03/23.
//

#include <stdio.h>

int main()
{
    int speed;

    printf("Enter your speed (int): ");
    scanf("%d", &speed);

    speed = (speed <= 65)? (65) : (speed <= 70)? (70) : (90);

    switch (speed)
    {
        case 65: printf("\nNo speeding ticket\n"); break;
        case 70: printf("\nsmall fine\n"); break;
        case 90: printf("\nbig fine\n"); break;
    }

    return 0;
}