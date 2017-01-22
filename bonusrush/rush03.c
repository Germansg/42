/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 14:03:32 by ggladkov          #+#    #+#             */
/*   Updated: 2017/01/15 22:32:40 by ggladkov         ###   ########.fr       */
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
			if ((b == 1 && a == 1) || (b == 1 && a == y))
				ft_putchar('A');
			else if ((b == y && a == 1) || (b == y && a == y))
				ft_putchar('C');
			else if (a == 1 || b == x || b == 1 || a == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
