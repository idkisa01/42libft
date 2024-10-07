/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:04:42 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 14:04:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	long_s;
	char	*dest;

	long_s = ft_strlen(s);
	dest = (char *)malloc(long_s + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, long_s);
	return (dest);
}

/*int main()
{
    char *original = "Hello";
    char *duplicada = ft_strdup(original);
	printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", duplicada);

	free(duplicada);
	return (0);
}*/