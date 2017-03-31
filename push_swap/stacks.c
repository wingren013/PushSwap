#include <libft.h>

void	push(t_stack *stack, long element)
{
	size_t	i;

	PR_REALC(stack->stack, stack->size + 1, stack->size);
	stack->size += 1;
	i = stack->size - 1
	while (i > 0)
	{
		stack->stack[i] = stack->stack[i - 1];
		i++;
	}
	stack->stack[0] = element;
}

long	pop(t_stack *stack)
{
	long	ret;

	ret = stack->stack[0];
	while (i < stack->size - 2)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	PR_REALC(stack->stack, stack->size - 1, stack->size);
	stack->size -= 1;
	return (ret);
}

void	push_norealloc(t_stack *stack, long element)
{
	size_t	i;

	if (stack->vsize >= stack->size)
	{
		PR_REALC(stack->stack, stack->size + 1, stack->size);
		stack->size += 1;
		stack->vsize += 1;
	}
	else
	{
		stack->vsize += 1;
	}
	i = stack->vsize - 1
	while (i > 0)
	{
		stack->stack[i] = stack->stack[i - 1];
		i++;
	}
	stack->stack[0] = element;
}

long	pop_norealloc(t_stack *stack)
{
	long	ret;

	ret = stack->stack[0];
	while (i < stack->vsize - 2)
	{
		stack->stack[i] = stack->stack[i + 1];
		i++;
	}
	stack->vsize -= 1;
	return (ret);
}
