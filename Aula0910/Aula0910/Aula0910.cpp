// Aula0910.cpp : define o ponto de entrada para o aplicativo do console.
//

/*
As linhas abixo contem inclusao
de biblioteca
*/
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>


// variaveis globais
int a; //inteiro
float b; // real (pouca precisao)
double c; // real (grande precisao)




int main()
{
	//variaveis locais
	char d; // caractere 
	bool e; // booleano (true/false);


	printf_s("Hello World!! \n \n");
	
	printf_s("teste\t\tTeste\n");
	
	printf_s("A\tB\tC\tD\n");
	printf_s("A\tB\tC\tD\n");
	printf_s("A\tB\tC\tD\n");


	printf_s("Mostrando o valor %i \n", 5);
	printf_s("A soma de %i e %i eg: %i \n \n", 99, 10, 99+10);

	printf_s("Mostrando %f, que eh um numero real \n", 4.3);
	
	printf_s("Olha so este numero: %i \n\n\n"); //erro1

	int f;
	f = 8;
	a = f * 2;

	printf_s("Resultado da multiplicacao de %i por 2 eh: %i \n", f, a);
	
	//comando de leitura 
	scanf_s("%i", &a);

	printf_s("\n\nValor digitado foi: %i\n\n", a);

	printf_s("Digite um valor real: ");
	scanf_s("%f", &b);

	printf_s("\nVoce digitou: %f \n", b);
	
	// para parar o console use system pause
	system("pause");


	return 0;
}

