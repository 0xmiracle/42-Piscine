/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:59:27 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/22 11:17:00 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	fac = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == '0')
	{
		return (1);
	}
	while (i <= nb)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}

// int	main(void)
// {
// 	int x;
// 	x = -1;
// 	printf("%d", ft_iterative_factorial(x));
// }