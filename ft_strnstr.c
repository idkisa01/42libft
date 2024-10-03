/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:35:33 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 14:35:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big,	const char *small, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*small == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i< size)
	{
		j = 0;
		while (big[i + j] == small[j])
		{
			j++;
			if (small[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

int main() {
    const char *big = "Hello, world!";
    const char *small = "world";
    char *result = ft_strnstr(big, small, 13);

    printf("Result: '%s'\n", result);

    return 0;
}