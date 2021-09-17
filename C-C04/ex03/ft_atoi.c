/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmalhomm <nmalhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 11:21:47 by nmalhomm          #+#    #+#             */
/*   Updated: 2021/09/14 10:42:46 by nmalhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_sign(char *str)
{
	int	i;
	int	sign;

	sign = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign += 1;
		i++;
	}
	if (sign % 2 == 1)
		sign = -1;
	else
		sign = 1;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	result;

	result = 0;
	i = 0;
	sign = get_sign(str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}

/*#include <stdio.h>
**
**int main()
**{
**    char a[] = "a123456789";
**    char b[] = "-+--+--123456789";
**    char c[] = "0";
**    char d[] = "--12adsv3456";
**
**    printf("%d\n",ft_atoi(a));
**    printf("%d\n",ft_atoi(b));
**    printf("%d\n",ft_atoi(c));
**    printf("%d\n",ft_atoi(d));
**}
*/
