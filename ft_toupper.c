/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:28:25 by isabegar          #+#    #+#             */
/*   Updated: 2024/09/19 14:00:03 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main (void)
{
	char c = 'b';
	char result;
	
	result = ft_toupper(c);
	printf("%c\n", c);
	printf("%c\n", result);
	
	return 0;
}*/
