#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf(" Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Ces quotient
    quotient = dividend / 0;

    // Computes remainder
    remainder = dividend % 0;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
