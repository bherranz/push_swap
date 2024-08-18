/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:00:05 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/04 12:34:13 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/libft.h"

// movements
void	sa(t_list *stack_a, int print);
void	sb(t_list *stack_b, int print);
void	ss(t_list *stack_a, t_list *stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int print);
void	rb(t_list **stack_b, int print);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, int print);
void	rrb(t_list **stack_b, int print);
void	rrr(t_list **stack_a, t_list **stack_b);

// utils
char	**ft_split_spaces(char *str);
void	sort2(t_list **stack_a);
void	sort3(t_list **stack);
void	sort4(t_list **stack_a, t_list **stack_b);
void	sort5(t_list **stack_a, t_list **stack_b);
int		is_sorted(t_list *stack_a);
void	general_algorithm(t_list **stack_a, t_list **stacks_b);
void	sort_lowest(t_list **stack_a);
int		lowest_pos(t_list **stack);
void	organize(t_list **stack_a, t_list **stack_b, int element);

// check input
int		is_sorted(t_list *stack_a);
int		is_repeated(t_list *stack_a);
int		is_valid(char *str);

// generate node
void	new_node(t_list **stack, int content);
void	generate_node(t_list **stack, char **chop);
void	free_stack(t_list **stack);
void	free_str_array(char **str);

//calculate cost
int		calculate_cost(t_list *stack_a, t_list *stack_b, t_list *node, int inb);

//calculate index
t_list	*max_n(t_list *stack);
t_list	*find_node(t_list *stack, int pos);
int		calculate_index(t_list *stack, int number, char letter);

//organize
void	organize(t_list **stack_a, t_list **stack_b, int element);

#endif
