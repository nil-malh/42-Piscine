/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:14:42 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/12 11:43:33 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0 )
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
