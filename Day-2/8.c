#include <stdio.h>

int main() {
    int n, temp, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    if (temp == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}