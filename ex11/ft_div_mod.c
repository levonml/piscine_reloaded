#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
  *mod = a % b;
  *div = a / b;
}
int	main(void)
{
  int a;
  int b;
  int div;
  int mod;
  a = 20;
  b = 1;

  ft_div_mod(a, b, &div, &mod);
  printf("%d / %d = %d (%d)", a, b, div, mod);
  return (0);

}
