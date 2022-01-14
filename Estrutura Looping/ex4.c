//Exercício 4
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int num, tabuada;  

    printf("----------------------\n");
    printf("        TABUADA        \n");
    printf("-----------------------\n");
    printf("Escolha o número da tabuada: ");
    scanf("%d", &num);

    system("pause");
    system("cls");
    
    printf("----------------------\n");
    printf("        TABUADA        \n");
    printf("-----------------------\n");

    for (tabuada = 1; tabuada <= 10; tabuada++)
    {
        printf("%d x %d = %d\n", num, tabuada, num*tabuada);
    }
    return 0; 
}