//Exercício 1
#include <stdio.h>
#include <locale.h>

int main () 
{
    setlocale(LC_ALL, "Portuguese"); 

    int num; 

    for (num = 1; num <= 100; num++)
    {
        printf("%d\n", num);
    }

    return 0;
}