#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], rev[100];
    int n, i, j;

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    n = strlen(str1);
    printf("\nLength of str1: %d\n", n);

    j = 0;
    for (i = n - 1; i >= 0; i--) {
        rev[j++] = str1[i];
    }
    rev[j] = '\0'; // Null-terminate the string
    printf("Reversed str1: %s\n", rev);

    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    if (strstr(str1, str2) != NULL) {
        printf("Substring found\n");
    } else {
        printf("Substring not found\n");
    }

    int isPalindrome = 1;
    for (i = 0; i < n / 2; i++) {
        if (str1[i] != str1[n - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("String is palindrome\n");
    } else {
        printf("String is not palindrome\n");
    }

    return 0;
}
