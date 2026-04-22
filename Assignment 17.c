#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j;
    double x, sum = 0, term, fact;
    int power;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        power = 2 * i + 1;
        fact = 1;

        for (j = 1; j <= power; j++) {
            fact *= j;
        }

        term = pow(x, power) / fact;

        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
    }

    printf("Sum of sine series = %lf\n", sum);

    return 0;
}
