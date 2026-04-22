
int main() {
    int n, i;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    for (i = 0; i < n; i++) {
        printf("Enter integer for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEven numbers are:\n");
    for (i = 0; i < n; i++) {

        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");


    printf("Odd numbers are:\n");
    for (i = 0; i < n; i++) {

        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

