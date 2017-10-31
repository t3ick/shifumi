*
** my_put_nbr.c for my_put_nbr in /home/t3i/shifumi/ngo_t/shifumi
** 
** Made by NGO tri
** Login   <ngo_t@etna-alternance.net>
** 
** Started on  Fri Oct 27 09:52:08 2017 NGO tri
** Last update Fri Oct 27 10:45:42 2017 NGO tri
*/
void my_putchar(char c);

int sigz (int n)
{
  if (n < 0)
    {
      n = - n;
      my_putchar('-');
    }
  return (n);
}

void writ (int i,int m,int n)
{
  int j;
  int rest;

  j = i;
  n = m;
  while (i != 0)
    {
      while (j != 0)
	{
	  rest = n % 10;
	  n = (n - rest) / 10;
	  j--;
	}
      my_putchar(rest + 48);
      n = m;
      i--;
      j = i;
    }
}

void minint()
{
  my_putchar('-');
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
}

void my_put_nbr(int n)
{
  if (n == 0)
    my_putchar(48);
  if (-2147483647 <= n)
    {
      int rest;
      int m;
      int i;

      n = sigz(n);
      m = n;
      i = 0;
      while (n != 0)
	{
	  rest = n % 10;
	  n = (n - rest) / 10;
	  i++;
	}
      writ(i, m, n);
    }
  else
    minint();
}
