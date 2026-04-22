#include <stdio.h>
#include <math.h>

int main() {
    int binNum, temp;
    int decimal = 0, i = 0;

    printf("Enter four digit binary number: ");
    scanf("%d", &binNum);

    temp = binNum;

    while (binNum != 0) {
        decimal += (binNum % 10) * pow(2, i);

        binNum /= 10;

        i++;
    }

    printf("Decimal number: %d\n", decimal);

    return 0;
}
