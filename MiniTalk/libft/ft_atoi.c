/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:45:11 by emekinci          #+#    #+#             */
/*   Updated: 2022/03/02 20:45:13 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			isaret;

	isaret = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			isaret = -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * isaret;
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}
//9ve13 decimal degerleri arasında oldugunda strye +1ekle
//32space
//24te deger negatifse isareti - deger yapıyoruz
//30da str null olana veya 0ve9 arasındaysa donguye gir
//32de num degiskeni hesaplanır
//33te deger pozitif max degeri gecerse -1dondur
//35te deger negatif degerin altındaysa 0dondur.
