#include <stdio.h>
#include <math.h>

long long int fib(int num);

int main() {
    int num;
    char fail;
    long long int fib_value;
    printf("Number Fibonacci: ");

    if (scanf("%d%c", &num, &fail) == 2 && (fail == '\n') && (fail != '\0') && num >= 0) {
        fib_value = fib(num);
        printf("%lld\n", fib_value);
    } else {
        printf("n/a\n");
    }
    return 0;
}

long long int fib(int num) {
    if (num == 0) return 0;
    if (num == 1) return 1;
    if (num == 2) return 1;
    return fib(num - 1) + fib(num - 2);
}
