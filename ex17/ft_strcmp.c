#include <stdio.h>
#include <string.h>
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
int     main(void)
{
  printf("%d\n", ft_strcmp("Kamilla", "M"));
  //    printf("%d\n", strcmp("hello", "ello"));
    return(0);
}
