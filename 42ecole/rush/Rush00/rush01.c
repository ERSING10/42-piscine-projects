/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muuslu <muuslu@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:32:25 by muuslu            #+#    #+#             */
/*   Updated: 2024/07/07 20:32:29 by muuslu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		m;
	int		e;

	e = 1;
	while (e <= y)
	{
		m = 1;
		while (m <= x)
		{
			if ((m == 1 && e == 1))
				ft_putchar('/');
			else if ((m == x && e == 1) || (m == 1 && e == y))
				ft_putchar('\\');
			else if (m == x && e == y)
				ft_putchar('/');
			else if (e == 1 || e == y || m == 1 || m == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			m++;
		}
		ft_putchar('\n');
		e++;
	}
}
