/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 07:52:54 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/15 12:21:47 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int     main(void)
{
        printf("2^3  = %d (Attendu : 8)\n", ft_iterative_power(2, 3));
        printf("0^0  = %d (Attendu : 1)\n", ft_iterative_power(0, 0));
        printf("5^-2 = %d (Attendu : 0)\n", ft_iterative_power(5, -2));
        return (0);
}*/
