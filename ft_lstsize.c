#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     counter;
    t_list  *temp;

    temp = lst;
    counter = 0;
    while (temp)
    {
        temp = temp -> next;
        counter++;
    }
    return (counter);
}
