/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoquill <lcoquill@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 10:31:40 by lcoquill          #+#    #+#             */
/*   Updated: 2026/09/17 10:41:41 by lcoquill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int nb)
{
	char	val;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		putnbr(nb / 10);
	}
	val = nb % 10 + '0';
	write(1, &val, 1);
}

int	main(void)
{
	putnbr(42);
	putnbr(-2147483648);
	return (0);
}
