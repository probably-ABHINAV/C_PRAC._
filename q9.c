// Largest of three number
#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest number is %d\n", largest);

    return 0;
}
