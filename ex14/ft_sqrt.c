#include <stdio.h>
int ft_sqrt(int nb)
{
  int a;

  a = 0;
  while(a * a <= nb)
    {
      if(a * a == nb)
	return(a);
	  a++;
    }
  return(0);

}
int main(void)
{
  
  printf("%d\n", ft_sqrt(493817284));
  return(0);
}
