/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 15:47:10 by isabegar          #+#    #+#             */
/*   Updated: 2024-09-21 15:47:10 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

void	*memset(void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;
	
	i=0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (s);
}

int main(void)
{
	char buffer[20] = "cocacola";

	memset(buffer, 'x', );

	buffer[4] = '\0';

	printf("%s", buffer);

	return 0;
}