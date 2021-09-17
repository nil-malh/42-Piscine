/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:13:05 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/07 13:48:10 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_case(char str)
{
	int	i;

	i = 0;
	if (str >= 'A' && str <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_upper_case(str[i]) == 1)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
