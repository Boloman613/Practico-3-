#include <stdio.h>
#include <math.h>
int main() {
    int n, i;
    double x, suma = 0, fac;
    printf("Ingrese X y n (impar): ");
    scanf("%lf %d", &x, &n);
    for(i = 1; i <= n; i += 2) {
        fac = 1;
        for(int j = 1; j <= i; j++)
            fac *= j;
        if(((i - 1) / 2) % 2 == 0)
            suma += pow(x, i) / fac;
        else
            suma -= pow(x, i) / fac;
    }
    printf("Suma = %.4f\n", suma);
    return 0;
}
