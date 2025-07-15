/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunerig <egunerig@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 09:12:13 by egunerig          #+#    #+#             */
/*   Updated: 2024/07/23 19:20:24 by egunerig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
