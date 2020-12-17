#include <stdlib.h>
#include <conio.h>
#include <stdio.h>


int main(void){

struct minha_estrutura
{
    int inteiro;
    double flutuante

}exemplo1, exemplo2;


exemplo2.flutuante = 5.3;

exemplo1 = exemplo2;

printf("%0.2lf \n", exemplo2.flutuante);


return 0;
}



