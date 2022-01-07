//4. Exercício 04
#include <stdio.h>
#include <locale.h>

int main ()
{   
    setlocale(LC_ALL, "Portuguese");
    int n1 = 10, n2 = 5, soma, sub, mult, div; 
    
    soma = n1+n2;
    sub = n1-n2;
    mult = n1*n2; 
    div = n1/n2; 

    printf("SOMA: %d\nSUBTRAÇÃO: %d\nMULTIPLICAÇÃO: %d\nDIVISÃO: %d", soma, sub, mult, div);
    return 0;
}