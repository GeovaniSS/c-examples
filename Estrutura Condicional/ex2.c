#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main() {   
    setlocale(LC_ALL, "Portuguese");

    int N1, N2;  
    char operador;

    printf("Escolha um número: ");
    scanf("%d%*c", &N1);

    printf("Escolha outro número: ");
    scanf("%d%*c", &N2);

    system("cls");

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
    
    if (operador == '+') {
        printf("%d + %d = %d", N1, N2, N1 + N2);
    }   
        else if (operador == '-') {
            printf("%d - %d = %d", N1, N2, N1 - N2);
        }   
            else if (operador == '/') {; 
                printf("%d / %d = %d", N1, N2, N1 / N2);
            }   
                else if (operador == '*') {
                    printf("%d * %d = %d", N1, N2, N1 * N2);
                }   
                    else {
                        printf("Operador não encontrado!");
                    }
}