/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggladkov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 14:03:32 by ggladkov          #+#    #+#             */
/*   Updated: 2017/01/14 20:38:16 by ggladkov         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((b == 1 || b == x) && a == y)
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
