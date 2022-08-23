/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 08:50:10 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/21 22:55:46 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int resultado;

		ft_printf("EM TODO O TEXTO DESSE TESTE FOI USADO O FT_PRINTF \n        tirando os testes da original\n");


	ft_printf("\n---------- teste com o tipo de dado %%c ----------\n");

	char c = 'r';

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um caractere - %c\n", c);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um caractere - %c\n", c);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%s ----------\n");

	char *s = "UBA LUBA DUB DUB!!";

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de uma string - %c\n", s[3]);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de uma string - %s\n", s);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%p ----------\n");

	char *p = s;

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um endereço - %p\n", p);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um endereço - %p\n", p);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%d ----------\n");

	int d = 1241231;

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um decimal - %d\n", d);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um decimal - %d\n", d);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%i ----------\n");

	int i = -18483518;

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um inteiro - %i\n", i);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um inteiro - %i\n", i);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%u ----------\n");

	unsigned int u = -124873518;

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um unsigned int - %u\n", u);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um unsigned int - %u\n", u);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%x ----------\n");

	int x = 100;


	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um low hexadecimal - %x\n", x);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um low hexadecimal - %x\n", x);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %%X ----------\n");

	int xh = 24873518;


	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um up hexadecimal - %X\n", xh);
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um up hexadecimal - %X\n", xh);
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);


	ft_printf("\n---------- teste com o tipo de dado %% ----------\n");

	resultado = 0;
	ft_printf("\nTeste com a ft_printf\n\n");
	resultado = ft_printf("Essa é impressão de um %%\n");
	ft_printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	resultado = 0;
	ft_printf("\nTeste com a printf\n\n");
	resultado = printf("Essa é impressão de um %%\n");
	printf("Total de caracteres impressos na string acima = %d\n\n", resultado);

	return 0;
}

