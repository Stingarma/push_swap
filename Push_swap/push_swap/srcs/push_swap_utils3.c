/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:29:41 by lsaumon           #+#    #+#             */
/*   Updated: 2024/03/12 17:07:17 by lsaumon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



void	rra(t_stack **a)
{
	t_stack	*temp;
	
	if (ft_lstsize(*a) < 2)
		return ;
	temp = *a;
	*a = ft_lstlast(*a);
	(*a)->next = temp;
	temp = *a;
	while (temp->next != *a)
		temp = temp->next;
	temp->next = NULL;
}

void	rrb(t_stack **b)
{
	t_stack	*temp;
	
	if (ft_lstsize(*b) < 2)
		return ;
	temp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = temp;
	temp = *b;
	while (temp->next != *b)
		temp = temp->next;
	temp->next = NULL;
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}