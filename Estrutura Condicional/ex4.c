#include <stdio.h> 
#include <locale.h> 

int main ()
{
    int num;

    printf("Escolha um número: ");
    scanf("%d", &num);

    system("pause");
    system("cls");

    if (num % 2 == 0) {
        printf("O número %d é par", num);
    }
    
    else {
        printf("O número %d é impar", num);
    }

    return 0;
}