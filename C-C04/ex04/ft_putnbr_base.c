/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:52:09 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/14 10:47:26 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	write (1, &nb, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_right_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	i;
	int			len;
	long		nb;

	len = ft_strlen(base);
	i = 0;
	nb = (long)nbr;
	if (ft_right_base(base) == 0)
		return ;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb *= -1;
	}
	if (nb >= 0 && nb < len)
	{
		ft_putchar(base[nb]);
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putchar(base[nb % len]);
	}
}
