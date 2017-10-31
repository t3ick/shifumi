/*
** main.c for main in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 09:21:06 2017 NGO tri
** Last update Fri Oct 27 19:29:25 2017 NGO tri
*/
#include <stdlib.h>

void	my_putchar(char c);
void	my_putstr(char *str);
char	*readline();
int	my_getnbr(char *str);
int     shifumi3();
int	shifumi5();
void my_put_nbr(int n);
int my_strcmp(char *s1, char *s2);

void point (int urscore, int iascore)
{
  my_putstr("VOUS AVEZ GAGNER ");
  my_put_nbr(urscore);
  my_putstr(" PARTIE(S)       VOTRE ADVERSAIRE A GAGNER ");
  my_put_nbr(iascore);
  my_putstr(" PARTIE(S)\n\n");
}

int play()
{
  char * rep;
  int nb;
  
  nb = 7;
  while (nb == 7)
    {
      my_putstr("\nvoulez vous jouer avec spock ?                                 [oui/non]");
      my_putstr("\n(oui : pierre, feuille, ciseaux, spock ou lezard.)\n");
      my_putstr("(non : pierre, feuille ou ciseaux.)\n");
      rep = readline();
      if (my_strcmp(rep, "non") == 0)
	nb = shifumi3();
      if (my_strcmp(rep, "oui") == 0)
	nb = shifumi5();
    }
  return (nb);
}

int main()
{
  int nb;
  int urscore;
  int iascore;

  urscore = 0;
  iascore = 0;
  nb = 0;
  while (nb != -1)
    {
      system("@cls||clear");
      point(urscore, iascore);
      if (nb == 6)
	return (0);
      nb = play ();
      if (nb == 1)
	urscore++;
      if (nb == 2)
	iascore++;
    }
  return(0);
}
