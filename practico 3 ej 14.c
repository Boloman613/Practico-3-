#include <stdio.h>
int main() {
    int n, i, a = 1, b = 1, c;
    printf("Ingrese n: ");
    scanf("%d", &n);
    if(n <= 2)
        c = 1;
    else {
        for(i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
    }
    printf("Fibonacci(%d) = %d\n", n, c);
    return 0;
}
