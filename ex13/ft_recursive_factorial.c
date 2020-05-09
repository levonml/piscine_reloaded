#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
  if (nb == 0)
    return(1);
  else
    {
      nb = nb * ft_recursive_factorial(nb - 1);
      return(nb);
    }
  return(0);
}

int	main(void)
{
  int nb;

  nb = 0;
  if (nb < 0 || nb >= 13)
    printf("0 error\n");
  else
  printf("%d! =  %d\n", nb, ft_recursive_factorial(nb));
  return (0);
}
