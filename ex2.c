#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct componente
{
    char tipo[20];
    char referencia [4];
    int num_ref;
    int valor;
    char unidade[10];
};

struct componente comp;

int main(){
    printf("Tipo do componente________: ");
    fflush(stdin);
    fgets(comp.tipo,20,stdin);

    printf("Referencia do componente__: ");
    fflush(stdin);
    fgets(comp.referencia,4,stdin);

    printf("Numero da referencia______: ");
    scanf("%i", &comp.num_ref);
    getchar();

    printf("Valor do componente_______: ");
    scanf("%i", &comp.valor);
    getchar();

    printf("Unidade___________________: ");
    fflush(stdin);
    fgets(comp.unidade,10,stdin);

    printf("\nCOMPONENTE CRIADO: \n\n");
    printf("%s\n", comp.tipo);
    printf("%s", comp.referencia);
    printf("%c", comp.num_ref);
    printf("\n Valor: %d", comp.valor);
    printf(" %s \n\n", comp.unidade);


    system ("pause");
    return 0;

}
