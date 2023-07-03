/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:02:49 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/21 21:26:25 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_checksign(char *str)
{
	int	i;
	int	scounter;
	int	sign;

	i = 0;
	sign = 1;
	scounter = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			scounter++;
		}
		i++;
	}
	if (scounter % 2 != 0)
	{
		sign = -1;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = ft_checksign(str);
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int	main(void)
{
	char	a[] = "-12367798";
	ft_atoi(a);
	printf("%d\n", ft_atoi(a));
	printf("%d\n", atoi(a));
}
