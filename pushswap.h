/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzennoun <kzennoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 17:53:38 by kzennoun          #+#    #+#             */
/*   Updated: 2021/05/14 19:05:36 by kzennoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_link 
{
	int nbr;
	int pos;
	void *prev;
	void *next;

}	t_link;

typedef struct s_stacks
{
	t_link	*stack_a;
	t_link	*stack_b;

}	t_stacks;

void	do_sa(t_stacks stacks);
void	do_sb(t_stacks stacks);
void	do_ss(t_stacks stacks);
void	do_pa(t_stacks stacks);
void	do_pb(t_stacks stacks);
void	do_ra(t_stacks stacks);
void	do_rb(t_stacks stacks);
void	do_rr(t_stacks stacks);
void	do_rra(t_stacks stacks);
void	do_rrb(t_stacks stacks);
void	do_rrr(t_stacks stacks);