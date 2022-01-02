// 10. Exercício 10
#include <stdio.h> 
int main ()
{
    char nome_carro[20];
    double valor_carro, imposto, revenda, valor_final; 

    printf("Nome do carro: ");
    scanf("%s", &nome_carro); 
    printf("Preco de fábrica: ");
    scanf("%lf", &valor_carro);

    imposto = valor_carro * 0.45; 
    revenda = valor_carro * 0.28; 
    valor_final = valor_carro + imposto + revenda;

    system("cls");

    printf("Nome do carro: %s\nValor final: %lf", nome_carro, valor_final);
    return 0; 
}
