#include <unistd.h>
void	ft_putchar(char c)
{
  write(1, &c, 1);
}
void	ft_print_alphabet(void)
{
  char z;
  z = 'a';
  while (z <= 'z')
    {
      ft_putchar(z);
      z++;
    }
}
int	main(void)
{
  ft_print_alphabet();
  ft_putchar('\n');
	  return (0);
}
