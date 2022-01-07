#include <stdio.h>
#include <locale.h> 

int main() 
{
    int L1, L2, L3; 

    printf("Informe o valor do 1° lado: ");
    scanf("%d", &L1);

    printf("Informe o valor do 2° lado: ");
    scanf("%d", &L2);

    printf("Informe o valor do 3° lado: ");
    scanf("%d", &L3);

    system("pause");
    system("cls");

    printf("---------------------\n");
    printf("      TRIANGULO      \n");
    printf("---------------------\n");

    if (L1 == L2 && L2 == L3) {
        printf("O triângulo é equilátero");
    }
        else if (L1 != L2 && L2 != L3) {
            printf("O trinângulo é escaleno");
        }
            else {
                printf("O triângulo é isósceles");
            }

    return 0; 
}