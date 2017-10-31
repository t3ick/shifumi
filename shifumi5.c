/*
** shifumi3.c for shifumi3 in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 09:22:34 2017 NGO tri
** Last update Fri Oct 27 17:38:03 2017 NGO tri
*/

char*readline();
void my_putstr(char *str);
int my_strcmp(char *s1, char *s2);
int my_getnbr(char *str);
int random5(int sign);
void my_put_nbr(int n);

int manche()
{
  char *nbr;
  int nb;

  nb = 0;
  while (nb % 2 == 0 || nb < 0)
    {
      my_putstr("\nEn combien de manche voulez vous jouez cette partie ?\n");
      my_putstr("(nombre impaire svp)\n");
      nbr = readline();
      nb = my_getnbr(nbr);
    }
  return ((nb / 2) + 1);
}

int party()
{
  int sign;
  char *choice;
  
  sign = 0;
  while (sign == 0)
  {
    my_putstr ("\npierre, feuille, ciseaux, spock ou lezard ?       q   pour quitter,\n");
    choice = readline();
    if (my_strcmp(choice, "pierre") == 0)
      sign = 1;
    if (my_strcmp(choice, "feuille") == 0)
      sign = 2;
    if (my_strcmp(choice, "ciseaux") == 0)
      sign = 3;
    if (my_strcmp(choice, "spock") == 0)
      sign = 4;
    if (my_strcmp(choice, "lezard") == 0)
      sign = 5;
    if (my_strcmp(choice, "q") == 0)
      sign = 6;
  }
  return (sign);
}

void score(int uwin,int iawin,int nb)
{
  my_putstr("vos points : ");
  my_put_nbr(uwin);
  my_putstr("      votre adversaires : ");
  my_put_nbr(iawin);
  my_putstr("      le premier Ã  ");
  my_put_nbr(nb);
  my_putstr(" gagne cette partie\n");
}

int quit(int uwin, int nb, int sign)
{
  if (sign == 6)
    return (6);
  if (uwin == nb)
    return (1);
  else
    return (2);
}

int shifumi5()
{
  int uwin;
  int iawin;
  int sign;
  int whowin;
  int nb;
  
  uwin = 0;
  iawin = 0;
  nb = manche();
  while (uwin != - 1)
    {
      score(uwin, iawin, nb);
      sign = party();
      whowin = random5(sign);
      if (whowin == 1)
	uwin++;
      if (whowin == 2)
	iawin++;
      if (uwin == nb || iawin == nb || sign == 6)
	return (quit(uwin, nb, sign));
    }
  return (quit(uwin, nb, sign));;
}
