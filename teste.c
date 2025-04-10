#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    int maior = (a > b) * a + (a <= b) * b;

    printf("Maior valor: %d\n", maior);

    return 0;
}
