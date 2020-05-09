#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
  int i;
  int r;

  r = 0;
  i = 0;
  while(s1[i])
    {
      if(s1[i] != s2[i])
	return(s1[i] - s2[i]);
      i++;
    }
  if(s2[i])
    return(-s2[i]);
  return(0);
}
int	main(int argc, char **argv)
{
  int i;
  int j;
  int k;
  char *temp;
  
  i = 1;
  j = 1;
  k = 1;
  while(i < argc)
    {
      while(j < argc - 1)
	{
	  if(ft_strcmp(argv[i], argv[j + 1]) > 0)
	    {
	      temp = argv[i];
	      argv[i] = argv[j + 1];
	      argv[j + 1] = temp;
	    }
	  j++;
	}
      j = i + 1;
      i++;
    }
  while(k < argc)
    {
      printf("%s\n", argv[k]);
      k++;
    }
 
   return(0);
}
