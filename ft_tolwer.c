/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolwer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isabegar <isabegar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:20:39 by isabegar          #+#    #+#             */
/*   Updated: 2024/09/19 14:25:34 by isabegar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_tolwer(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int main (void)
{
	char c = 'H';
	char result;
	
	result = ft_tolwer(c);
	printf("%c\n", c);
	printf("%c\n", result);
	
	return 0;
}*/