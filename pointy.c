#include <stdio.h>

int main() {
    // variables
    unsigned int temp = 333444555666;
    char * p = &temp;

    printf("333,444,555,666 in hex: %x\n", temp);

    // printing parts of hex
    int i;
    for (i = 1; i < 5; i++) {
        printf("This is part %d of 333,444,555,666: %hhx\n", i, *p);
        p++;
    } p = &temp; // reset pointer address

    // Incrementing by 1
    for (i = 0; i < 4; i++) {
        (*p)++;
        p++;
    }

    printf("After incrementation by 1, 333,444,555,666 in:\n");
    printf("Decimal: %d\n", temp);
    printf("Hexadecimal: %x\n", temp);
    p = &temp; // reset again

    for (i = 0; i < 4; i++) {
        (*p) += 16;
        p++;
    }
    printf("After incrementation by 16, 333,444,555,666 in:\n");
    printf("Decimal: %d\n", temp);
    printf("Hexadecimal: %x\n", temp);

}
