/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:17:34 by marvin            #+#    #+#             */
/*   Updated: 2024/09/26 10:17:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i]== c)
			return (s + i);
		i++;
	}
	return NULL;
}

int main ()
{
	char str[] = "Hola, mundo!";
	char c = 'u';
	const char *result;

	result = ft_strchr(str, c);
	if (result != NULL)
		printf("Character '%c' found at position: %ld\n", c, result - str);
	else
		printf("Character '%c' not found\n", c);

	return 0;
	//printf("%c\n", c, result - str);
	//return 0;
}