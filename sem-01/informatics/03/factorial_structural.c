#include <stdio.h>

int factorial(int x) {
    int result = 1;

    for (int i = 1; i <= x; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int x = 5;

    printf("The factorial of %d is: %llu\n", x, factorial(x));

    return 0;
}
