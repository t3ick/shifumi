/*
** my_putchar.c for my_put_char in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 09:53:22 2017 NGO tri
** Last update Fri Oct 27 09:53:33 2017 NGO tri
*/
#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}
