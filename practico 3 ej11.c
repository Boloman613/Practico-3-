#include <stdio.h>
int main() {
    int a, b, r;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("MCD = %d\n", a);
    return 0;
}

