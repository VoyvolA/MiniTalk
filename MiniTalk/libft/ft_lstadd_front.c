/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emekinci <emekinci@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 20:49:25 by emekinci          #+#    #+#             */
/*   Updated: 2022/03/02 20:49:26 by emekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}
//daha once olusturulan struct dizimiz (t_list) ve eklenecek yeni struct
// gonderilir. 19. satirda new innext elemani lst nin icerisine atanir.
// 20 de lst nin asil degeri new olur.
// boylece new lst nin onune eklenmis olur.
