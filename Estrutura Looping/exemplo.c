#include <stdio.h>
#include <string.h>

int main ( ) {
	char palavra1[50] = {"bola"};
	char palavra2[50] = {"abacate"};
	
	printf("Antes da copia\npalavra1: %s\npalavra2: %s\n", palavra1, palavra2);
	
	strcpy(palavra2, palavra1);

	printf("\nDepois da copia\npalavra1: %s\npalavra2: %s", palavra1,palavra2);

}