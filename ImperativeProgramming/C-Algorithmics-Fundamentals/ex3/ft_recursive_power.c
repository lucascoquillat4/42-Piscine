/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 07:53:09 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/16 10:13:48 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	printf("2^3  = %d (Attendu : 8)\n", ft_recursive_power(2, 3));
	printf("0^0  = %d (Attendu : 1)\n", ft_recursive_power(0, 0));
	printf("5^-2 = %d (Attendu : 0)\n", ft_recursive_power(5, -2));
	return (0);
}*/
