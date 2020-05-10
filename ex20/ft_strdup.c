#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *po)
{
  int i;

  i = 0;
  while(po[i])
    i++;
  return(i);
}
char *ft_strdup(char *src)
{
  int i;
  char *res;
  
  res = (char*)malloc((ft_strlen(src) + 1) * sizeof(char));
  if(res == NULL)
    return("-1");
      i = 0;
      while(src[i])
	{
	res[i] = src[i];
	i++;
	}
        res[i] = '\0';
        return(res);
    }
int main(void)
{
  char *s = "kalabok";
  printf("%s\n", ft_strdup(s));
  return(0);
}
