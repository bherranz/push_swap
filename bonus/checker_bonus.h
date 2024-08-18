/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bherranz <bherranz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:40:00 by bherranz          #+#    #+#             */
/*   Updated: 2024/04/13 16:17:48 by bherranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h"
# include "../push_swap.h"

void	free_str_array(char **str);
char	**ft_split_spaces(char *str);
int		is_sorted(t_list *stack_a);
int		is_valid(char *str);
int		is_repeated(t_list *stack_a);
void	generate_node(t_list **stack, char **chop);
void	free_stack(t_list **stack);
void	print_error(t_list **stack_a, t_list **stack_b, char *order);
void	new_stack(t_list **stack_a, char **argv);

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

//gnl
char	*read_buffer(int fd, char *buffer);
char	*new_line(char *buffer);
char	*to_be_continued(char *buffer, char *line);
char	*get_next_line(int fd);
size_t	ft_strleng(const char *s);
void	*ft_callocg(size_t count, size_t size);
char	*ft_strchrg(const char *s, int c);
char	*ft_strjoing(char *s1, char *s2);
char	*ft_substrg(char *s, unsigned int start, size_t sub_len);

#endif
