#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    int len1 = 0, len2 = 0;

    // Check if both numbers are composed of digits only
    for (int i = 0; num1[i] != '\0'; i++) {
        if (num1[i] < '0' || num1[i] > '9') {
            printf("Error\n");
            return 98;
        }
        len1++;
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (num2[i] < '0' || num2[i] > '9') {
            printf("Error\n");
            return 98;
        }
        len2++;
    }

    int *result = calloc(len1 + len2, sizeof(int));

    // Multiply the two numbers
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int res = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = res + result[p2];
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }

    // Remove leading zeros from result
    int i = 0;
    while (result[i] == 0 && i < len1 + len2 - 1) {
        i++;
    }

    // Print the result
    for (; i < len1 + len2; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}
