#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];
    int decimal = 0;
    int length, i;
    
    printf("%s", "Enter a binary number: "); // prompt
    scanf("%64s", binary);

    length = strlen(binary);

    for (i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Error: Invalid character '%c' at position %d. Only '0' and '1' are allowed in a binary number.\n", binary[i], i + 1);
            return 1;
        }
        decimal = decimal * 2 + (binary[i] - '0');
    }

    printf("%d\n", decimal);

    return 0;
}
