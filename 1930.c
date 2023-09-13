#include <stdio.h>

int main() {
    int T1, T2, T3, T4, totalTomadas;

    scanf("%d", &T1);
    scanf("%d", &T2);
    scanf("%d", &T3);
    scanf("%d", &T4);
    
    totalTomadas = T1+T2+T3+T4;
    printf("%d\n", totalTomadas - 3);
}