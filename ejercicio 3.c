#include <stdio.h>
int main() {
    int N, dig, cont = 0;
    printf("Ingrese un numero: ");
    scanf("%d", &N);
    while (N > 0) {
        dig = N % 10;
        if (dig % 2 == 0)
            cont++;
        N /= 10;
    }
    printf("Cantidad de digitos pares: %d\n", cont);
    return 0;
}
