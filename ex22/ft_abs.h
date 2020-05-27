#ifndef FT_ABS_H
#define FT_ABS_H

#define  ABS(Value)		\
  ({int a;		\
  if(Value < 0)		\
    {			\
      a = -Value;		\
    }			\
  else			\
    {			\
      a = Value;		\
    }			\
  a;			\
  })
#endif
