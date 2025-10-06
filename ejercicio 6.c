#include <stdio.h>
int main() {
    int N, dig, invalido = 0;
    printf("Ingrese un numero en base 8: ");
    scanf("%d", &N);
    while (N > 0) {
        dig = N % 10;
        if (dig > 7)
            invalido = 1;
        N /= 10;
    }
    if (invalido)
        printf("El numero NO es valido en base 8\n");
    else
        printf("El numero es valido en base 8\n");
    return 0;
}
