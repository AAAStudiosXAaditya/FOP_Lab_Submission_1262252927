#include <stdio.h>

struct Student {
    char name[50];
    int PRN;
    float m1, m2, m3;
    float perct;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        printf("Name: ");
        // The [^\n] format specifier allows reading strings with spaces
        scanf(" %[^\n]", s[i].name);

        printf("PRN: ");
        scanf("%d", &s[i].PRN);

        printf("Enter marks for m1, m2, m3: ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].perct = (s[i].m1 + s[i].m2 + s[i].m3) / 3.0;
    }

    for (i = 0; i < n; i++) {
        printf("\n---------------------------\n");
        printf("Name: %s\n", s[i].name);
        printf("PRN: %d\n", s[i].PRN);
        printf("Percentage: %.2f%%\n", s[i].perct);

        // Logic: Conditional result printing
        if (s[i].perct >= 75) {
            printf("Result: Distinction\n");
        } else if (s[i].perct >= 65) {
            printf("Result: First class\n");
        } else if (s[i].perct >= 50) {
            printf("Result: Second class\n");
        } else if (s[i].perct >= 40) {
            printf("Result: Pass\n");
        } else {
            printf("Result: Fail\n");
        }
    }

    return 0;
}
