#include <stdio.h>
int main() {
    int N, i;
    long long fac = 1;
    printf("Ingrese N: ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++)
        fac *= i;
    printf("El factorial es: %lld\n", fac);
    return 0;
}
