/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:24:29 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/22 10:46:15 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int		nbr_a;
	int		nbr_b;
	int		result_div;
	int		result_mod;
	char	c_div;
	char	c_mod;

	nbr_a = 12;
	nbr_b = 5;
	ft_div_mod(nbr_a, nbr_b, &result_div, &result_mod);
	c_div = result_div + '0';
	c_mod = result_mod + '0';
	write(1, "Div : ", 6);
	write(1, &c_div, 1);
	write(1, "\nMod : ", 7);
	write(1, &c_mod, 1);
	write(1, "\n", 1);
	return (0);
}*/
