/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 07:52:43 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/15 12:34:03 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int   main(void)
{
        printf("Facto. de 5: %d (Attendu: 120)\n", ft_recursive_factorial(5));
        printf("Facto. de 0: %d (Attendu: 1)\n", ft_recursive_factorial(0));
        printf("Facto. de -5: %d (Attendu: 0)\n", ft_recursive_factorial(-5));
        return (0);
}*/
