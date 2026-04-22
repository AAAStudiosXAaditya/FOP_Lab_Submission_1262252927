#include <stdio.h>
#include <math.h>
int main() {
    float x, y, result;
    int choice, i;
    int fact = 1;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 5) {
        printf("Enter two numbers: ");
        scanf("%f %f", &x, &y);
    }
    else if(choice == 6) {
        printf("Enter a number: ");
        scanf("%f", &x);
    }
switch(choice) {
	case 1:
           		 result = x + y;
            		printf("Result = %.2f", result);
            		break;
	case 2:
            		result = x - y;
            		printf("Result = %.2f", result);
            		break;

	case 3:
            		result = x * y;
           		printf("Result = %.2f", result);
            		break;
	case 4:
            		if (y == 0)
                		printf("N.D.");
           		else {
                		result = x / y;
                		printf("Result = %.2f", result);
           		 	}
            			break;
	case 5:
            		result = pow(x, y);
            		printf("Result = %.2f", result);
            		break;

        	case 6:
            		if(x < 0)
                		printf("Factorial not defined for negative numbers");
            		else {
               		 for(i = 1; i <= (int)x; i++)
                   		 fact = fact * i;
			printf("Factorial = %d", fact);
            			}
            			break;

        	default:
            		printf("Invalid choice");
    }

    return 0;
}
