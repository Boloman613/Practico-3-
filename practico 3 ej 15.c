#include <stdio.h>
#include <unistd.h>
int main() {
    int h, m, s;
    for(h = 0; h < 24; h++)
        for(m = 0; m < 60; m++)
            for(s = 0; s < 60; s++) {
                printf("%02d:%02d:%02d\r", h, m, s);
                fflush(stdout);
                sleep(1);
            }
    return 0;
}
