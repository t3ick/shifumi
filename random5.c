/*
** random3.c for random3 in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 09:29:37 2017 NGO tri
** Last update Fri Oct 27 17:32:47 2017 NGO tri
*/
#include <stdlib.h>
#include <time.h>

void my_put_nbr(int n);
void my_putstr(char *str);
void putsign(int sign);

int rando(int max)
{
  int ran;

  srand (time (NULL));
  ran = (rand()% max) + 1;

  return (ran);
}

void versus(int sign, int ran)
{
  my_putstr("\n");
  putsign(sign);
  my_putstr(" vs ");
  putsign(ran);
  my_putstr("\n");
}

int winlose(int sign, int ran)
{
  if ((sign == 2 && ran == 1)||(sign == 3 && ran == 2)||(sign == 4 && ran == 3)||(sign == 5 && ran == 4)||(sign == 1 && ran == 5))
    {
      my_putstr("victoire\n");
    return(1);
    }
  if ((sign == 1 && ran == 3)||(sign == 2 && ran == 4)||(sign == 3 && ran == 5)||(sign == 4 && ran == 1)||(sign == 5 && ran == 2))
    {
      my_putstr("victoire\n");
      return(1);
    }
  else
    {
      my_putstr("dÃ©faite\n");
      return (2);
    }
}

int random5 (int sign)
{
  int ran;

  ran = rando(5);
  versus(sign, ran);
  if (sign == ran)
    {
      my_putstr("Ã©qualitÃ©\n");
      return (0);
    }
  ran = winlose(sign, ran);
  return(ran);
}
