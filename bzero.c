/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-21 18:38:15 by isabegar          #+#    #+#             */
/*   Updated: 2024-09-21 18:38:15 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	clear_memory(char *s, size_t n)
{
	bzero(s, n);
}

int main()
{
	char buffer[10] = "Hello";
	clear_memory(buffer,10);
	printf("Buffer after clearing: '%s'\n", buffer);
	return 0;
}
