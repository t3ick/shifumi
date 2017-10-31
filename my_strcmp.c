/*
** my_strcmp.c for my_strcmp in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 10:23:32 2017 NGO tri
** Last update Fri Oct 27 10:23:44 2017 NGO tri
*/
int my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while(s1[i] == s2 [i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  if (s1[i] == s2[i])
    return (0);
  else if (s1[i] < s2[i])
    return (-1);
  else
    return (1);
}
