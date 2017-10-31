/*
** list.h for list in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 18:30:34 2017 NGO tri
** Last update Fri Oct 27 19:00:23 2017 NGO tri
*/
typedef struct     s_list
{
  void             *urmove;
  void             *opmove;
  void             *nb;
  struct s_list    *next;
}                  t_list;
