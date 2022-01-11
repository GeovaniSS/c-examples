//Exercício 5
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese");

    int num; 

    for (num = 100; num >= 0; num--)
    {
        if (num % 2 == 0) 
        {
            printf("%d\n", num);
        }
    }

    return 0; 
}