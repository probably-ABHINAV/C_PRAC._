// Number is palindrome or not
#include <stdio.h>
int main() {
    int num, original, rev = 0;

    printf("Enter the number you want to check: ");
    scanf("%d", &num);

    original = num;  

    while(num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if (rev == original) {
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
