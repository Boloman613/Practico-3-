#include <stdio.h>
int main() {
    int a, b, A, B, r;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &A, &B);
    a = A; b = B;
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("MCM = %d\n", (A * B) / a);
    return 0;
}
