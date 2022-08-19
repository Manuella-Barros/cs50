#include <stdio.h>
#include <math.h>

void dinheiro(float troco, int moeda);
void total(int resultado1, int resultado2, int resultado3, int resultado4);

int main (void){
    float troco;

    printf("Troco devido? ");
    scanf("%f", &troco);

    int moeda = round(troco * 100);
    dinheiro( troco, moeda);
}

void dinheiro(float troco, int moeda){
    int resto1, resto2, resto3, resto4;
    int resultado1 = 0;
    int resultado2 = 0;
    int resultado3 = 0;
    int resultado4 = 0;


    if (troco >= 0){

        if (troco >= 0.25){
            resto1 = (int)moeda % (int)25;
            resultado1 = troco / 0.25;

        } else{
            resto1 = moeda;
        }

        if (resto1 < 25 && resto1 >= 10){
            resto2 = (int)resto1 % (int)10;
            resultado2 = resto1 / 10;

        } else{
            resto2 = moeda;
        }

        if (resto2 < 10 && resto2 >= 5){
            resto3 = (int)resto2 % (int)5;
            resultado3 = resto2 / 5;

        } else{
            resto3 = moeda;
        }

        if (resto3 < 5 && resto3 >= 1){
            resto4 = (int)resto3 % (int)1;
            resultado4 = resto3 / 1;
        }

        total(resultado1, resultado2, resultado3, resultado4);

    } else{
        main();

    }
}

void total(int resultado1,int resultado2,int resultado3,int resultado4){
    int total = resultado1 + resultado2 + resultado3 + resultado4;
    printf("O troco tem %i moedas \n", total);
}