#include "libft.h"

void ft_lstfree_cont(void *content)
{
	if (content)
		free(content);
}

