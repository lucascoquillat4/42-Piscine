/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:30:58 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/22 13:03:31 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_nb;
	int	i;

	i = 0;
	while (i < size)
	{
		temp_nb = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp_nb;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int		tab[4];
	int		i;
	char	c;

	tab[0] = 4;
	tab[1] = 7;
	tab[2] = 2;
	tab[3] = 9;
	i = 0;
	while (i < 4)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);

	ft_rev_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}*/
