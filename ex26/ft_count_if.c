#include <stdio.h>
int     function(char *c)
{
  if(c == "hello")
    return(1);
  else
    return(0);
  }
int     ft_count_if(char **tab, int (*f)(char*))
  {
    int i;
    int count;

    count = 0;
    i = 0;
    while(tab[i])
      {
	    if (f(tab[i]) == 1)
	      count++;
	    i++;
      }

    return(count);
  }
int     main()
  {
    char *arg[] = {"hello ex26!", "hello", NULL};
    int (*f)(char*) = &function;
    char *d = "dddd";
    printf("%d\n", ft_count_if(arg, f));
    printf("%s", d);
    return(0);
  }
