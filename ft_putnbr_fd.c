/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaeza-g <sbaeza-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 12:00:53 by sbaeza-g          #+#    #+#             */
/*   Updated: 2026/06/25 21:00:54 by sbaeza-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if(nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if(nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd(nbr % 10 + '0', fd);
}

// int main()
// {
// 	int		i;

// 	i = 87;
// 	ft_putnbr_fd(i, 1);
// }