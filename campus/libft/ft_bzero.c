/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:08:54 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/20 09:56:59 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	int	i;

	c = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}

// 1. Convertimos el char que recibimos en unsigned
// 2. Lo guardamos en una variable auxiliar
// 3. Inicializamos un contador
// 4. Creamos un bucle que recorra el puntero y 
// añade un valor nulo en cada posición
// 5. Devolvemos el string modificado

/*int	main(void)
{
	char	s[20] = "Hello World!";

	// CORREGIR
	ft_bzero(s, 4);
	printf("%s\n", s);
	return (0);
}*/
