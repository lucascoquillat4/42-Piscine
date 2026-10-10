/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:48:57 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/22 11:30:43 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	calc_a;

	calc_a = *a;
	*a = calc_a / *b;
	*b = calc_a % *b;
}

/*int	main(void)
{
	int		a;
	int		b;
	char	res;

	a = 13;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	write(1, "Div: ", 5);
	res = a + '0';
	write(1, &res, 1);
	write(1, "\nMod: ", 6);
	res = b + '0';
	write(1, &res, 1);
	write(1, "\n", 1);
	return (0);
}*/
