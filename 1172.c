#include <stdio.h>

int main() {
    int vet[10];
    int num;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        if (num <=0)
        {
            vet[i] = 1;
        }
        else
        {
            vet[i] = num;
        }   
    }
    for (int i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, vet[i]);
    }
    

}