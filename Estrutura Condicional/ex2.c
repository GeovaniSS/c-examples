#include <stdio.h> 
#include <locale.h>

int main() {   
    setlocale(LC_ALL, "Portuguese");

    int N1, N2;  
    char operador;

    printf("Escolha um número: ");
    scanf("%d%*c", &N1); //%*c limpa o buffer de entada

    printf("Escolha outro número: ");
    scanf("%d%*c", &N2);

    system("cls"); //usa um comando do prompt do windows para limpar a tela

    printf("-----------------------\n");
    printf("       OPERADORES      \n");
    printf("-----------------------\n");
    printf("[+] ADIÇÃO\n");
    printf("[-] SUBTRAÇÃO\n");
    printf("[/] DIVISÃO\n");
    printf("[*] MULTIPLICAÇÃO\n");
    printf("Escolha um operador: ");
    scanf("%c%*c", &operador);

    system("pause"); 
    system("cls");

    printf("-----------------------\n");
    printf("       RESULTADO       \n");
    printf("-----------------------\n");
    
    switch (operador)
    {
        case '+': 
            printf("%d + %d = %d", N1, N2, N1 + N2);
            break;
        
        case '-':
            printf("%d - %d = %d", N1, N2, N1 - N2);
            break;
        
        case '/':
            printf("%d / %d = %d", N1, N2, N1 / N2);
            break;
        
        case '*':
            printf("%d * %d = %d", N1, N2, N1 * N2);
            break;
        
        default: 
            printf("Operador não encontrado!");
            break;
    }
}