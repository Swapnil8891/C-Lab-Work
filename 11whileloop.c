// Write a C program to check if a number is prime or not using while loop.

#include <stdio.h>

int main() 
{
    int num, i = 2;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) 
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    while (i <= num / 2) 
    {
        if (num % i == 0) 
        {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
        i++;
    }

    printf("%d is a prime number.\n", num);

    return 0;
}
