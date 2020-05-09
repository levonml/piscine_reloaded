#include <stdio.h>

void	ft_swap(int *a, int *b)
{
  int c;
  c = *a;
  *a = *b;
  *b = c;
  
}
int	main(void)
{
  int x;
  int y;

  x = 'X';
  y = 'Y';
  ft_swap(&x, &y);
  printf("the value of x is %c\n", x);
  printf("the value of y is %c\n", y); 
  return(0);
}
