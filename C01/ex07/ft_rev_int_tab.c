/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratwani <ratwani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:24:33 by ratwani           #+#    #+#             */
/*   Updated: 2023/05/08 09:59:57 by ratwani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	tab[i] = '\0';
	while (i != '0')
	{
		write(1, &tab[i], 1);
		i--;
	}
	return (i);
}

// int	main(void)
// {
// 	int *i;
// 	i = "98643612";
// 	int size;

// 	printf("%s", ft_rev_int_tab(tab, size));
// }