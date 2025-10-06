#include <stdio.h>
int main() {
    int N, i, suma = 0;
    printf("Ingrese N: ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
        suma += i * i;
    printf("La suma de cuadrados es: %d\n", suma);
    return 0;
}
