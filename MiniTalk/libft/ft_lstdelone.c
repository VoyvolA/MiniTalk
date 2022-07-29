/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:50:16 by emekinci          #+#    #+#             */
/*   Updated: 2022/03/02 20:50:19 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
//bir struct verilir ve eger o bos ise direkt return edilir.
// eger bos degilse verilen del fonksiyonuna lst nin contenti verilir
// silinir, en sonda da free ile lst bellekten silinir.
