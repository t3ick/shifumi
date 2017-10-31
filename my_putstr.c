/*
** my_putstr.c for my_putstr in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 10:02:23 2017 NGO tri
** Last update Fri Oct 27 10:02:39 2017 NGO tri
*/
void my_putchar(char c);

void my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      my_putchar (str[i]);
      i = i + 1;
    }
}
