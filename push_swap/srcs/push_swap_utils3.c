/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:29:41 by lsaumon           #+#    #+#             */
/*   Updated: 2024/03/10 17:44:38 by lsaumon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*temp;
	
	if (ft_lstsize(*a) < 2)
		return ;
	ft_lstlast(*a);
	*a = 
	ft_lstadd_front(a, temp);
	*a = (*a)->next;
	(*a)->next = NULL;
}