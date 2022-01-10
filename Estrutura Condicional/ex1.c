//Exercício 01 
#include <stdio.h>
#include <locale.h>  

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    
    int num; 

    printf("Escolha um numero qualquer: ");
    scanf("%d", &num);

    if (num > 25) {
        printf("O número %d é maior que 25", num);
    }
    else if (num < 25) {
        printf("O número %d é menor que 25", num);
    }
    else {
        printf("O número %d é igual a 25", num);
    }

}