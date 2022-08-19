#include <stdio.h>

void piramide(int altura);

int main(void)
{
    int altura;
    printf("Escolha um numero para a altura (entre 1 e 8): ");
    scanf("%i", &altura);

    piramide(altura);
}

void piramide(int altura){

    if (altura < 9 && altura > 0){
        printf("Voce escolheu o numero: %i\n", altura);
        
    
        for (int c = 1; c <= altura; c++){ 
            
            for (int a = 8; a >= c; a--){
            printf(" ");
            }
            
            for (int b = 1; b <= c; b++){
            printf("#");
            }
    
            printf("\n");
        }
    } else {
        main();
    }
}