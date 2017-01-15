/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 12:41:55 by ggladkov          #+#    #+#             */
/*   Updated: 2017/01/12 12:42:17 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
void ft_print_alphabet(void)

{
	int i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
	return ;
}
