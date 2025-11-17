/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:08:54 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 13:29:50 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	c = (unsigned char *)s;
	int	i;

	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
	return (s);
}

// 1. Convertimos el char que recibimos en unsigned
// 2. Lo guardamos en una variable auxiliar
// 3. Inicializamos un contador
// 4. Creamos un bucle que recorra el puntero y añade un valor nulo en cada posición
// 5. Devolvemos el string modificado

int	main(void)
{
	printf();
	return (0);
}
