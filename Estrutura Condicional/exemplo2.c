//Exemplo de Condicional Aninhada
#include <stdio.h> 

int main () 
{
    int N1,N2;
    float media;

    printf("1° NOTA: ");
    scanf("%d", &N1);

    printf("2°NOTA: ");
    scanf("%d", &N2);

    media = (N1 + N2) /2;

    system("pause");
    system("cls");

    if (media >= 6) {
        printf("APROVADO!");
    }
        else if (media >= 4 && media < 6) {
            printf("RECUPERAÇÃO!");
        }
            else {
                printf("REPROVADO!");
            }
}