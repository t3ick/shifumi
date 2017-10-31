/*
** putsign.c for putsign in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 12:46:55 2017 NGO tri
** Last update Fri Oct 27 17:21:42 2017 NGO tri
*/
void my_putstr(char *str);

void putsign(int sign)
{
  if (sign == 1)
    my_putstr("pierre");
  if (sign == 2)
    my_putstr("feuille");
  if (sign == 3)
    my_putstr("ciseaux");
  if (sign == 4)
    my_putstr("spock");
  if (sign == 5)
    my_putstr("lezard");
}
