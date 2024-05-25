/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:30:14 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 18:47:36 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	show_rotations(int i, t_item *item)
{
	printf("%d - [%d] NEED %d ROTATIONS\n", i, to_ps(item)->value, to_ps(item)->rotation);

}

static void	rotate_a(t_array *stack, t_item *item)
{
	while (to_ps(item)->rotation != 0)
	{
		if (to_ps(item)->rotation < 0)
		{
			rra(stack);
			to_ps(item)->rotation++;
		}
		else
		{
			ra(stack);
			to_ps(item)->rotation--;
		}
	}
}

static void	rotate_b(t_array *stack, t_item *item)
{
	while (to_ps(item)->rotation != 0)
	{
		if (to_ps(item)->rotation < 0)
		{
			rrb(stack);
			to_ps(item)->rotation++;
		}
		else
		{
			rb(stack);
			to_ps(item)->rotation--;
		}
	}
}

static void update_needed_rotation(t_array *list)
{
	t_item	*item;
	t_ps	*cast_ps;

	item = list->first;
	while (item)
	{
		cast_ps = (t_ps *) item->value;
		cast_ps->rotation = get_rotation(list, item);
		item = item->next;
	}
}

void	push_a_to_b(t_array *stack_a, t_array *stack_b)
{
	t_item	*top_a;
	
	if (array_size(stack_b) <= 1)
		pb(stack_b, stack_a);
	else
	{
		update_nearest_lower(stack_a, stack_b);
		update_needed_rotation(stack_a);
		update_needed_rotation(stack_b);
		array_foreach(stack_a, show_rotations);
		array_foreach(stack_b, show_rotations);
		top_a = get_cheapest(stack_a);
		printf("CHEAPEST NUMBER IS %d\n", to_ps(top_a)->value);
		rotate_a(stack_a, top_a);
		rotate_b(stack_b, to_ps(top_a)->nearest_lower);
		pb(stack_b, stack_a);
	}
}
