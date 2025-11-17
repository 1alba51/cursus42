/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arene-ri <arene-ri@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 11:44:06 by arene-ri          #+#    #+#             */
/*   Updated: 2025/11/17 11:44:09 by arene-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}

// 1. Declaramos una variable que recuente los valores del puntero
// 2. Inicializamos la variable en cero
// 3. Recorremos el puntero
// 4. Contamos cada hueco del puntero
// 5. Sumamos el hueco al contador
// 6. Devolvemos cuantos huecos ha contado la variable

/*int	main(void)
{
	char	*str;
	int	length;

	str = "Hello world!";
	length = ft_strlen(str);
	printf("Hello World! -> %d\n", length);
	return (0);	
}*/
