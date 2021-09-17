/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:47:30 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/08 15:31:15 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *searched)
{
	unsigned int	i;

	i = 0;
	while (searched[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	search(char *searched, char *str, int j)
{
	int	i;

	i = 0;
	while (searched[i])
	{
		if (searched[i] != str[j])
		{
			return (0);
		}
		i++;
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (ft_strlen(to_find) <= 0 && ft_strlen(str) <= 0)
	{
		return (str);
	}
	while (str[i])
	{
		if (search(to_find, str, i))
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
