//8. Exercício 08
#include <stdio.h> 
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int temp_c, temp_f; 

    printf("Qual a temperatura do clima em °C: ");
    scanf("%d", &temp_c);

    temp_f = (9*temp_c + 160)/5;

    system("pause");
    system("cls");

    printf("A temperatura de %d°C convertida em °F é igual a: %d°F", temp_c, temp_f);
    return 0; 
}
