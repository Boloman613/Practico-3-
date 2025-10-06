#include <stdio.h>
int main() {
    int n, i, primo = 1;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    if(n <= 1) primo = 0;
    for(i = 2; i < n; i++)
        if(n % i == 0)
            primo = 0;
    if(primo)
        printf("Es primo\n");
    else
        printf("No es primo\n");
    return 0;
}
