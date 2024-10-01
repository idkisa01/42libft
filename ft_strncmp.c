/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:09:28 by marvin            #+#    #+#             */
/*   Updated: 2024/10/01 18:09:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char	*s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while(i < n && s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	const char *s1 = "Hola amigos";
    const char *s2 = "Hola mundo";

    // Llamada a tu función ft_strncmp
    int result = ft_strncmp(s1, s2, 20);

    // Imprimir 0 si son iguales, 1 si son diferentes
    printf("%d\n", result == 0 ? 0 : 1);

    return 0;
}
