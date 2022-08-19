#include <stdio.h>

void crescimento();

int main(void){
    int pi, pf;

    do{
        printf("Tamanho inicial: ");
        scanf("%i", &pi);
    } while(pi < 9);

    do{
        printf("Tamanho final: ");
        scanf("%i", &pf);
    } while(pf < pi);

    crescimento(pi, pf);
}

void crescimento(pi, pf){
    int n, counter = 0;

    n = pi;

    do{
        counter++;
        n = n + (n / 3) - (n / 4);
    } while(n < pf);

    printf("Irá demorar %i anos\n", counter);

}