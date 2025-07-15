/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunerig <egunerig@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:45:21 by egunerig          #+#    #+#             */
/*   Updated: 2024/07/23 19:27:27 by egunerig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		r *= nb;
		power--;
	}
	return (r);
}
