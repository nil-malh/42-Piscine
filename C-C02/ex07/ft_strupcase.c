/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:51:50 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/07 13:22:40 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower_case(char str)
{
	int	i;

	i = 0;
	if (str >= 'a' && str <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_lower_case(str[i]) == 1)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
