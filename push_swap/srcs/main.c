/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:51:35 by lsaumon           #+#    #+#             */
/*   Updated: 2024/03/10 17:38:27 by lsaumon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	
	t_stack a, b, c;
	// t_stack d, e, f;
	// t_stack *g, *h;
	t_stack	*i;
	// t_stack	*j;
	t_stack *temp;

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	// d.next = &e;
	// e.next = &f;
	// f.next = NULL;
	
	a.value = 12;
	b.value = 5;
	c.value = 32;

	// d.value = 7;
	// e.value = 63;
	// f.value = 15;

	// g = &a;
	// h = &d;
	i = &a;
	// j = &d;

	// printf("%d %d %d\n", a.value, a.next->value, a.next->next->value);
	// printf("%d %d %d\n", d.value, d.next->value, d.next->next->value);
	
	// pa(&g, &h);

	// printf("%d %d %d\n", a.value, a.next->value, a.next->next->value);
	// printf("%d %d %d\n", d.value, d.next->value, d.next->next->value);

	temp = i;
	
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	// temp = j;
	
	// while (temp)
	// {
	// 	printf("%d ", temp->value);
	// 	temp = temp->next;
	// }
	// printf("\n");
	
	rra(&i);

	temp = i;
	
	while (temp)
	{
		printf("%d ", temp->value);
		temp = temp->next;
	}
	printf("\n");
	// temp = j;
	
	// while (temp)
	// {
	// 	printf("%d ", temp->value);
	// 	temp = temp->next;
	// }
	// printf("\n");
	return (0);
}

