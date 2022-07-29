/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:45:57 by emekinci          #+#    #+#             */
/*   Updated: 2022/03/02 20:45:58 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;

	ret = malloc(nmemb * size);
	if (ret)
		ft_bzero(ret, nmemb * size);
	return (ret);
}
//calloc'un islevi, sayım icin surekli olarak
//yeterli alan ayırır her biri bayt bellek
//boyutunda olan ve bir isaretci
//donduren nesneler ayrılmıs belleklerdır
//ayrılan bellekleri sıfır bay degeriyle doldurur.
//nmemb eleman sayısı 
//size eleman bye boyutu 
//ret ile mallocta alan olusturuyoruz
//bzero ile bye degerlerini sıfır yapıp return ediyoruz
