//02. Exercício 02
#include <stdio.h> 
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[25]; //String para armazenar o nome
    int matri;

    printf("Nome: ");
    scanf("%s", &nome);
    printf("Matrícula: ");
    scanf("%d", &matri);

    system("pause"); //Deixa o programa parado, até que o usuário aperte alguma tecla
    system("cls"); //Limpa a tela

    printf("Nome: %s\nMatricula: %d", nome, matri);

    return 0; 
}