#include <stdio.h> 
#include <locale.h> 

int main ()
{
    float N1, N2, N3, media; 

    printf("-----------------------\n");
    printf("         NOTAS         \n");
    printf("-----------------------\n");

    printf("1° Nota: ");
    scanf("%f", &N1);

    printf("2° Nota: ");
    scanf("%f", &N2);

    printf("3° Nota: ");
    scanf("%f", &N3);

    media = (N1+N2+N3)/3;

    system("pause");
    system("cls");

    printf("-----------------------\n");
    printf("     RESULTADO FINAL   \n");
    printf("-----------------------\n");  

    if (media >= 6) 
    {
        printf("MÉDIA: %f\n", media);
        printf("ALUNO APROVADO!");
    }
        else if (media >= 4 || media <= 5.9)
        {
            printf("MÉDIA: %f\n", media);
            printf("ALUNO DE RECUPERAÇÃO!");
        }
            else
            {
                printf("MÉDIA: %f\n", media);
                printf("ALUNO REPROVADO!");
            }

    return 0; 
}