#include <stdio.h>
#include <math.h>
int main() {
    int n, i, fact = 1, result;
    float squrt, square, cube;

    printf("Enter a number: ");
    scanf("%d", &n);
    if(n >= 0)
        squrt = pow(n, 0.5);
    else
        printf("Square root not defined for negative number\n");
   square = n * n;
   cube = n * n * n;
   if(n <= 1) {
        printf("Not a Prime Number\n");
    }
    else {
        int prime = 1;
        i = 2;

        while(i <= sqrt(n)) {
            if(n % i == 0) {
                prime = 0;
                break;
            }
            i++;
        }

        if(prime == 1)
            printf("Prime Number\n");
        else
            printf("Not a Prime Number\n");
    }
    if(n < 0) {
        printf("Factorial not defined for negative number\n");
    }
    else {
        fact = 1;
        for(i = 1; i <= n; i++)
            fact = fact * i;
    }
    if(n > 1) {
        int temp = n;
        printf("Prime Factors: ");
        i = 2;

        while(temp > 1) {
            if(temp % i == 0) {
                printf("%d ", i);
                temp = temp / i;
            }
            else
                i++;
        }
        printf("\n");
    }
    if(n >= 0)
        printf("Square Root = %.2f\n", squrt);

    printf("Square = %.2f\n", square);
    printf("Cube = %.2f\n", cube);

    if(n >= 0)
        printf("Factorial = %d\n", fact);
    return 0;
}
