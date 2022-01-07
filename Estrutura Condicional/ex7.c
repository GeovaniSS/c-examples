#include <stdio.h> 
#include <locale.h> 

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int produto; 

    printf("--------------------\n");
    printf("       CÓDIGO       \n");
    printf("--------------------\n");
    printf("Digite o código do produto: ");
    scanf("%d", &produto);

    system("pause");
    system("cls");

    printf("-----------------------\n");
    printf("     CLASSIFICAÇÃO     \n");
    printf("-----------------------\n");

    if (produto == 1) {
        printf("Alimento não-perecível");
    }
        else if (produto >= 2 && produto <= 4) {
            printf("Alimento perecível");
        }
            else if (produto == 5 || produto == 6) {
                printf("Vestuário");
            }
                else if (produto == 7) {
                    printf("Higiene pessoal");
                }
                    else if (produto >= 8 && produto <= 10) {
                        printf("Utensílios domésticos");
                    }
                        else {
                            printf("Código Inválido");
                        }

    return 0;
}