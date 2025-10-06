#include <stdio.h>
int main() {
    int N, suma = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &N);
    while (N > 0) {
        suma += N % 10;
        N /= 10;
    }
    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}

