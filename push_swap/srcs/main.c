/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:51:35 by lsaumon           #+#    #+#             */
/*   Updated: 2024/03/10 16:20:00 by lsaumon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	// t_stack_a stack_a;
	// t_stack_b *stack_b;
	// t_stack_top *top;
	
	t_stack a, b, c;
	t_stack d, e, f;
	t_stack *g, *h;
	t_stack *temp;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	d.next = &e;
	e.next = &f;
	f.next = NULL;
	
	a.value = 12;
	b.value = 5;
	c.value = 32;

	d.value = 7;
	e.value = 63;
	f.value = 15;

	g = &a;
	h = &d;

	// printf("%d %d %d\n", a.value, a.next->value, a.next->next->value);
	// printf("%d %d %d\n", d.value, d.next->value, d.next->next->value);
	
	// pa(&g, &h);

	// printf("%d %d %d\n", a.value, a.next->value, a.next->next->value);
	// printf("%d %d %d\n", d.value, d.next->value, d.next->next->value);

	temp = g;
	
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	temp = h;
	
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	pb(&g, &h);

	temp = g;
	
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	temp = h;
	
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	return (0);
}

