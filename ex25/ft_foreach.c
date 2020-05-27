#include <stdio.h>
#include <unistd.h>
void	ft_putnbr(int x)
{
  char res;

  res = x + 48;
  write(1, &res, 1);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
  int i;

  i = 0;
  while(i < length)
    {
      f(tab[i]);
      i++;
    }
}
int	main(void)
{
  int tab[5] = {1, 0, 0, 4, 5};
  ft_foreach(tab, 5, &ft_putnbr);
  write(1, "\n", 1);
  return(0);
}
