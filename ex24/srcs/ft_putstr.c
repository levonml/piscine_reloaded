#include <unistd.h>
#include "header.h"
void	ft_putstr(char *str)
{
  int i;

  i = 0;
  while(str[i] != '\n')
    {
      ft_putchar(str[i]);
      i++;
    }
}
int	main(void)
{
  ft_putstr("I love my life");
  return(0);
  
}
