//5. Exercício 05
#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3; //NOTAS
    float media; 

    printf("1° NOTA: ");
    scanf("%d%*c", &n1);

    printf("2° NOTA: ");
    scanf("%d%*c", &n2);

    printf("3° NOTA: ");
    scanf("%d%*c", &n3);

    media = (n1+n2+n3)/3;

    system("pause");
    system("cls");

    printf("A média das notas do aluno é igual a: %f", media);
    return 0;
}