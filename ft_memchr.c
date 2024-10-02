/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 09:48:36 by isabegar          #+#    #+#             */
/*   Updated: 2024-10-02 09:48:36 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	size_t	i;
	unsigned char value = (unsigned char)c;

	i = 0;
	while (ptr[i] != '\0' && i < n)
	{
		if (ptr[i] == value)
			return (void *)(ptr +i);
		i++;
	}
	return (NULL);
}
int main()
{
    unsigned char *result = memchr("Hola mundo", 'a', 10);
    printf("%ld\n", result ? (result - (unsigned char *)"Hola mundo") : -1);
    return 0;
}