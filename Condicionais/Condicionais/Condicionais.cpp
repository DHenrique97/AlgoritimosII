// Condicionais.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

int main()
{ 
	// operador logico sempre entre 2 operandos
	//resultado da operacao pode ser apenas (true/false)
	//conectores logicos
	// "e" - &&
	// "ou" - ||
	// "==" - igual
	// "!=" - diferente
	// "<" - menor
	// ">" - maior
	// "<=" - menor igual
	// ">=" - maior igual

	// Se 
	if (true)
	{
		// este codigo sera executado
	}
	
	
	if (false)
	{
		// este codigo nao sera executado
		}
	int a = 0;
	
	if (a == 0);
	{
		printf_s("A igual a zero\n");
	}

	if (a != 0)
	{
		printf_s("a diferente de zero\n");
	}

	int b = 5;
	
	if (b < a);
	{
		printf_s("b menor que a\n");
	}

	if (a <= b); // a pode ser menor, pode ser igual ou pode ser diferente
	{
		printf_s("A menor ou igual que a B\n");
	}

	system("pause");

}



