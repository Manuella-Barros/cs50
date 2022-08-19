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
    
    if (altura <= 8 && altura >=1){
        printf("Voce escolheu a altura %i\n", altura);
    
        for (int a = 1; a <= altura; a++){
            
            for (int b = 8; b >= a; b--){
            printf(" ");
            }
            
            for (int c = 1; c <= a; c++){
            printf("#");
            }
            
            printf("  ");
            
            for (int c = 1; c <= a; c++){
            printf("#");
            }
            
            printf("\n");    
        }
    } else {
        main();
    }
}