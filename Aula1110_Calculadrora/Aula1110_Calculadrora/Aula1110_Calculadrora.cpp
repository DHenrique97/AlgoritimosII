// calculadora_simples.cpp : Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>



int LerNumeroInteiro() {
	printf_s("Calculadora Top:\n");
	int numero;
	scanf_s("%i", &numero);
	//int sub, mais, div, mult;
	//scanf("%i", &calc);
	return numero;
}




float Calculadora_Soma(int a, int b) {
	return (a + b);
}

float Calculadora_Subtracao(int a, int b) {
	return (a - b);
}

float Calculadora_Divicao(float a, float b) {
	return (a / b);
}

float Calculadora_Multiplicacao(int a, int b) {
	return (a * b);
}



int main()
{


	int primeiroNumero = LerNumeroInteiro();
	int segundoNumero = LerNumeroInteiro();
	int s = Calculadora_Soma(primeiroNumero, segundoNumero);
	int a = Calculadora_Subtracao(primeiroNumero, segundoNumero);
	int b = Calculadora_Multiplicacao(primeiroNumero, segundoNumero);
	float c = Calculadora_Divicao(primeiroNumero, segundoNumero);
	printf_s("A soma dos resultados foi: %i \n", s);
	printf_s("A subtracao dos resultados foi: %i \n", a);
	printf_s("A multiplicacao dos resultados foi: %i \n", b);
	printf_s("A Divisao dos resultados foi: %f \n", c);

	system("pause");

}
