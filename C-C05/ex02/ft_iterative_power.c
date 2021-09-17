/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:09:47 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/12 18:58:02 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pow;
	int	t;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	pow = power;
	t = nb;
	while (pow > 1)
	{
		t *= nb;
		pow--;
	}
	return (t);
}
