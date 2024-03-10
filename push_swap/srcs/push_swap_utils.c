/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:18:09 by lsaumon           #+#    #+#             */
/*   Updated: 2024/03/10 17:27:02 by lsaumon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *a)
{
	int	temp;

	if (ft_lstsize(a) < 2)
		return ;
	temp = a->value;
	a->value = a->next->value;
	a->next->value = temp;
}

void	sb(t_stack *b)
{
	int	temp;

	if (ft_lstsize(b) < 2)
		return ;
	temp = b->value;
	b->value = b->next->value;
	b->next->value = temp;
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (ft_lstsize(*b) < 1)
		return ;
	temp = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, temp);
	*a = temp;
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (ft_lstsize(*a) < 1)
		return ;
	temp = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, temp);
	*b = temp;
}
