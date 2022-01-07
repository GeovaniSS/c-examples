#include <stdio.h>
#include <locale.h>  

int main () 
{
    setlocale(LC_ALL, "Portuguese");
    
    int num; 

    printf("Escolha um numero qualquer: ");
    scanf("%d", &num);

    if (num > 25) {
        printf("O número é maior que 25");
    }
    else if (num < 25) {
        printf("O número é menor que 25");
    }
    else {
        printf("O número é igual a 25");
    }

}