#include "header.h"
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <stdio.h>
//#define BUF_SIZE 10

int main(int argc, char **argv)
{
  int fd;
  char buf[BUF_SIZE];
  int i;
  if(argc == 1)
    printf("File name missing.\n");
  else if(argc > 2)
    printf("Too many arguments.\n");
  else if (argc == 2)
    {
      fd = open(argv[1], O_RDONLY);
      if (fd == -1)
	printf("opening error\n");
      while((i = read(fd, buf, BUF_SIZE)))
    {
      if (i < BUF_SIZE)
	buf[i] = '\0';
      printf("%s", buf);
    }
      printf("\n");
      close(fd);
    }
  return(0);
}
