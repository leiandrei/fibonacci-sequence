#include <stdio.h>
#include <stdlib.h>
int fib(int nth);

int main()
{
    int nth;

    printf("Enter nth number for fibonacci seq: ");
    scanf("%d", &nth);

    for (int i = 0; i < nth; i++) {
        printf("%d   ", fib(i));
    }

    return 0;
}

int fib(int nth)
{
    if (nth == 0) {
        return 0;
    } else if (nth == 1) {
        return 1;
    } else {
        return fib(nth - 1) + fib(nth - 2);
    }
}
