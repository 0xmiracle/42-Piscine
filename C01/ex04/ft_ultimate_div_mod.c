/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:22:29 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/08 18:18:45 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;
	*a = tmp1;
	*b = tmp2;
}

int	main(void)
{
	int	x;
	int	y;

	x = 100;
	y = 15;
	ft_ultimate_div_mod(&x, &y);
	printf("%d with remainder %d", x, y);
}
