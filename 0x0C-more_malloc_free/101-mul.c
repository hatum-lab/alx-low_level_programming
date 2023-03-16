#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int i, j, k, carry, len1, len2, res_len;
    char *num1, *num2, *result;

    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    len1 = strlen(num1);
    len2 = strlen(num2);
    res_len = len1 + len2;

    result = calloc(res_len, sizeof(char));

    if (!result) {
        printf("Error\n");
        return 98;
    }

    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            k = i + j + 1;
            result[k] += (num1[i] - '0') * (num2[j] - '0') + carry;
            carry = result[k] / 10;
            result[k] %= 10;
        }
        result[i + j + 1] += carry;
    }

    i = 0;
    while (i < res_len - 1 && result[i] == 0) {
        i++;
    }

    for (; i < res_len; i++) {
        putchar(result[i] + '0');
    }

    putchar('\n');

    free(result);

    return 0;
}
