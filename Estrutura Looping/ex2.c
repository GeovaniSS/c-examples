//Exercício 2
#include <stdio.h>
#include <locale.h>

int main () 
{
    int aluno, notaFinal, somadasNotas=0; 
    float mediaGeral; 

    for (aluno = 1; aluno <= 30; aluno++)
    {
        printf("-----------------\n");
        printf("    PORTUGUÊS    \n");
        printf("-----------------\n");
        printf("Nota Final: ");
        scanf("%d", &notaFinal);
        system("cls");
        somadasNotas = somadasNotas + notaFinal; 
    }
    
    mediaGeral = somadasNotas/30;

    printf("-----------------\n");
    printf("    PORTUGUÊS    \n");
    printf("-----------------\n");
    printf("Média Geral: %f", mediaGeral);

    return 0;
}