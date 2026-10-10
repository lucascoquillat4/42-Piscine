/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:14:40 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/22 13:06:58 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp_nb;
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp_nb = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp_nb;
			i = -1;
		}
		i++;
	}
}

/*int	main(void)
{
	int		tab[6];
	int		i;
	char	c;

	tab[0] = 1;
	tab[1] = 4;
	tab[2] = 2;
	tab[3] = 5;
	tab[4] = 3;
	tab[5] = 6;
	ft_sort_int_tab(tab, 6);
	i = 0;
	while (i < 6)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
