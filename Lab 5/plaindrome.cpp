#include <stdio.h>
int main() {
    int n, rn = 0, r, o;
    printf("Enter the integer: ");
    scanf("%d", &n);
    o = n;
    while (n != 0) {
        r = n % 10;
        rn = rn * 10 + r;
        n /= 10;
    }
    if (o == rn)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);

    return 0;
}
