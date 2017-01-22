/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 14:03:32 by ggladkov          #+#    #+#             */
/*   Updated: 2017/01/15 15:07:03 by ggladkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	while (a <= y)
	{
		b = 1;
		while (b <= x)
		{
			if ((b == 1 || b == x) && a == 1)
				ft_putchar('o');
			else if ((b == 1 || b == x) && a == y)
				ft_putchar('o');
			else if (a == 1 || a == x)
				ft_putchar('-');
			else if (b == 1 || b == y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
