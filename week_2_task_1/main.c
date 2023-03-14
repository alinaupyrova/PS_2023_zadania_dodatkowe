#include <stdio.h>

int main() {
    int a, b, a_reversed = 0;

    printf("Please enter two integers separated by a space: ");
    scanf("%d %d", &a, &b);

    while (a > 0) {
        a_reversed = a_reversed * 10 + a % 10;
        a /= 10;
    }

    if (a_reversed == b) {
        printf("The first and second numbers are reversed\n");
    } else {
        printf("The  first and second numbers are not reversed\n");
    }

    return 0;
}
