/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaumon <lsaumon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:37:34 by lsaumon           #+#    #+#             */
/*   Updated: 2024/03/10 17:38:38 by lsaumon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

// typedef struct s_stack
// {
// 	int					value;
// 	struct s_stack	*next;
// 	struct s_stack	*prev;
// }					t_stack;

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack*a, t_stack *b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);

#endif