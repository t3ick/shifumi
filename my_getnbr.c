/*
** my_getnbr.c for my_getnbr in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 10:08:43 2017 NGO tri
** Last update Fri Oct 27 10:10:26 2017 NGO tri
*/
int my_getnbr(char *str)
{
  int i;
  int nb;
  int s;
  int diz;

  i = 0;
  nb = 0;
  s = 1;
  diz = 1;
  while (str[i] == 45 || str[i] == 43)
    if (str[i++] == 45)
      s = - s;
  while (47 < str[i] && str[i] < 58)
    i++;
  i--;
  while (47 < str[i] && str[i] < 58)
    {
      nb = nb + ((str[i--] - 48) * diz);
      diz = diz * 10;
    }
  return(s * nb);
}
