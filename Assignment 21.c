#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }

    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(source);
        exit(1);
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");
    fclose(source);
    fclose(destination);

    return 0;
}
