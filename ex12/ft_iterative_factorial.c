#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int fact;

  fact = 1;
  if (nb < 0 || nb >= 13)
  return(0);
  while (nb > 1)
    {
      fact = fact * nb;
      nb--;
    }
  return(fact);
}
int main(void)
{
  int a;
  a = 13;
  printf("%d\n", ft_iterative_factorial(a));
  return(0);
}
