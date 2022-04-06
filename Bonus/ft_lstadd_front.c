
#include "libft.h"

/*

Function name 
ft_lstadd_front

Prototype 
void ft_lstadd_front(t_list **lst, t_list *new);

Turn in files -

Parameters 
lst: The address of a pointer to the first link of a list.
new: The address of a pointer to the node to be added to the list.

Return value 
None

External functs. 
None

Description 
Adds the node ’new’ at the beginning of the list.

*/


void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*r;

	r = (t_list *)malloc(sizeof(t_list));
	if (!r)
		return (NULL);
	r->content = content;
	r->next = (t_list *)0;
	return (r);
}
