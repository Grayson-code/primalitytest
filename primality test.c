/**
 * Copyright (c) 2024 Adwaith
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include <stdio.h>

int input;

int IsPrime(int n)
{
    if (n == 2 || n == 3)
        return 0;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return 1;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 1;
    }

    return 0;
}

int main() {
    printf("Type a number: ");
    scanf("%d", &input);
    if (IsPrime(input)) {
        printf("\nThe Given integer is prime number\n");
    } else {
        printf("\n The Given integer has more than 2 factors");
    }
    printf("Number -> ");
    printf("%d", input);
}