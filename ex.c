#include <stdio.h> 

int main ()
{
        /* Declaração das variáveis */ 
        int n1,n2,n3; 
        float media; 

        printf("Escolha um numero qualquer: %c");
        scanf("%d", &n1);
        printf("Escolha um numero qualquer: %c");
        scanf("%d", &n2);
        n3 = 20; 
        media = (n1+n2+n3)/3;
        
        printf("O valor da media: %d", media);
        return 0;  
}