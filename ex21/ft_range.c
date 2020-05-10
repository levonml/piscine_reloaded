#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
  int *res;
  int i;
  
  if (min >= max)
    res = NULL;
  else
    {
      res = (int*)(malloc(sizeof(int) * (max - min)));
      if(res == NULL)
	return(0);
      else
	{
	  i = 0;
	  while(min < max)
	    {
	      res[i] = min;
	      min++;
	      i++;
	    }
	}
    }
  return(res);
}
int	main(void)
{
  int min;
  int max;
  int i;

  min = 3;
  max = 12;
  i = 0;
  while(i < (max - min))
    {
    printf("%d", ft_range(min, max)[i]);
    i++;
    }
  return(0);
}
